/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:14:29 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer	*ft_bzero(t_buffer *buf, t_uint64 size)
{
	t_ustring	*tmp;
	t_uint64	i;

	if (!buf)
		return (NULL);
	i = 0;
	tmp = (t_ustring *)buf;
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return (buf);
}
