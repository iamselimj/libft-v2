/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:20:01 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:16:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_memmove(t_buffer *dst, const t_buffer *src, t_uint64 len)
{
	t_ustring		*d;
	const t_ustring	*s;

	if (!dst && !src)
		return (NULL);
	d = (t_ustring *)dst;
	s = (const t_ustring *)src;
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dst);
}
