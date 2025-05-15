/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:05:51 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:35:49 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_uint64	word_count(const t_string *str, t_int32 c)
{
	t_int32		in_word;
	t_uint64	count;
	t_uint64	i;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static t_uint64	word_len(const t_string *str, t_int32 sep)
{
	t_uint64	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	return (len);
}

static t_string	*fill_word(const t_string *str, t_int32 sep)
{
	t_string	*word;
	t_uint64	len;
	t_uint64	i;

	len = word_len(str, sep);
	word = ft_calloc(len + 1, sizeof(t_int32));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static t_buffer	free_all(t_string **split)
{
	t_uint64	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

t_string	**ft_split(const t_string *str, t_int32 c)
{
	t_string	**tab;
	t_uint64	i;

	if (!str)
		return (NULL);
	tab = ft_calloc(word_count(str, c) + 1, sizeof(t_string *));
	if (!tab)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			tab[i] = fill_word(str, c);
			if (!tab[i])
				return (free_all(tab), NULL);
			i++;
			str += word_len(str, c);
		}
	}
	tab[i] = NULL;
	return (tab);
}
