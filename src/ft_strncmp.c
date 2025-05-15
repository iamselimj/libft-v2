/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:06:15 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_strncmp(const t_string *str1, const t_string *str2, t_uint64 size)
{
	t_uint64	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < size)
	{
		if ((t_uchar)str1[i] != (t_uchar)str2[i])
			return ((t_uchar)str1[i] - (t_uchar)str2[i]);
		i++;
	}
	return (EMPTY);
}
