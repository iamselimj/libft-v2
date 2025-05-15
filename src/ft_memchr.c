/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:19:51 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:45:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_memchr(const t_buffer *buf, t_int32 c, t_uint64 size)
{
	unsigned char	*ustr;
	unsigned char	uc;
	t_uint64		i;

	uc = (t_uint32)c;
	ustr = (t_ustring *)buf;
	i = 0;
	while (i < size)
	{
		if (ustr[i] == uc)
			return ((t_buffer *)(ustr + i));
		i++;
	}
	return (NULL);
}
