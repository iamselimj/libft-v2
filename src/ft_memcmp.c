/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:28 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:40:09 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_memcmp(const t_buffer *buf1, const t_buffer *buf2, t_uint64 size)
{
	const t_ustring	*tmp1;
	const t_ustring	*tmp2;
	t_uint64		i;

	tmp1 = (const t_ustring *)buf1;
	tmp2 = (const t_ustring *)buf2;
	i = 0;
	while (i < size)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (SUCCESS);
}
