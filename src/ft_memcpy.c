/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:18:08 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:38:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_memcpy(t_buffer *dst, const t_buffer *src, t_uint64 size)
{
	t_ustring		*d;
	const t_ustring	*s;
	t_uint64		i;

	d = (t_ustring *)dst;
	s = (const t_ustring *)src;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
