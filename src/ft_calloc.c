/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:01:45 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:03:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_calloc(t_uint64 count, t_uint64 size)
{
	t_ustring	*buf;

	buf = (t_ustring *)malloc(count * size);
	if (!buf)
		return (NULL);
	ft_bzero(buf, size);
	return (buf);
}
