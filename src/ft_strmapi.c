/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:11:32 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:06:30 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_strmapi(const t_string *str, char (*f)(t_uint32, t_char))
{
	t_string	*res;
	t_uint64	len;
	t_uint64	i;

	if (!str || !f)
		return (NULL);
	len = ft_strlen(str);
	res = ft_calloc(len + 1, sizeof(t_int32));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, str[i]);
		i++;
	}
	return (res);
}
