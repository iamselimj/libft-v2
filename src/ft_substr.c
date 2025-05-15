/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:02:35 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:05:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_substr(const t_string *str, t_uint64 start, t_uint64 len)
{
	t_string	*new;
	t_uint64	slen;
	t_uint64	i;

	if (!str)
		return (NULL);
	slen = ft_strlen(str);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	new = ft_calloc(len + 1, sizeof(t_string *));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = str[start + i];
		i++;
	}
	return (new);
}
