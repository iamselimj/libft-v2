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

char	*ft_strtrim(const t_string *str, const t_string *set)
{
	t_uint64	start;
	t_uint64	end;
	t_uint64	len;

	if (!str || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(str);
	while (str[start] && ft_isinset(str[start], set))
		start++;
	while (end > start && ft_isinset(str[end - 1], set))
		end--;
	len = end - start;
	return (ft_substr(str, start, len));
}
