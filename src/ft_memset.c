/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:56:25 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:14:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_memset(t_buffer *buf, t_int32 c, t_uint64 size)
{
	t_ustring	*tmp;
	t_uint64	i;

	tmp = (t_ustring *)buf;
	i = 0;
	while (i < size)
	{
		tmp[i] = (t_uint64)c;
		i++;
	}
	return (buf);
}
