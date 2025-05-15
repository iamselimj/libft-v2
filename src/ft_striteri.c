/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:11:48 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:35:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_striteri(t_string *str, t_buffer (*f)(t_int32, t_string *))
{
	t_uint64	i;

	if (!str || !f)
		return (FAILURE);
	i = 0;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
	return (SUCCESS);
}
