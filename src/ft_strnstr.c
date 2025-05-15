/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:35:20 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:34:51 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_strnstr(const t_string *str1, const t_string *str2,
		t_uint64 len)
{
	t_uint64	i;
	t_uint64	j;

	if (!str1 || !str2)
		return (NULL);
	if (str2[0] == '\0')
		return ((t_string *)str1);
	i = 0;
	while (str1[i] && i < len)
	{
		j = 0;
		while (str1[i + j] && str2[j] && str1[i + j] == str2[j] && i + j < len)
			j++;
		if (str2[j] == '\0')
			return ((t_string *)str1 + i);
		i++;
	}
	return (NULL);
}
