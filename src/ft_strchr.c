/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:09:25 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:34:27 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_strchr(const t_string *str, t_int32 c)
{
	t_int32	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((t_string *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((t_string *)&str[i]);
	return (NULL);
}
