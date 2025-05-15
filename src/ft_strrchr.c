/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:11:27 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:34:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_strrchr(const t_string *str, t_int32 c)
{
	t_string	*res;

	res = NULL;
	while (*str)
	{
		if (*str == (t_char)c)
			res = (t_string *)str;
		str++;
	}
	if ((t_char)c == '\0')
		return ((t_string *)str);
	return (res);
}
