/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacquet <sjacquet@student.str9.be>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:04:22 by sjacquet          #+#    #+#             */
/*   Updated: 2024/11/04 14:04:22 by sjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_isinset(t_int32 c, const t_string *set)
{
	t_uint32	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (c);
		i++;
	}
	return (FALSE);
}
