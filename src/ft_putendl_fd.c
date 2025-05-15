/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:33 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:37:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int64	ft_putendl_fd(t_int32 fd, t_string *str)
{
	t_uint64	i;
	t_int64		len;

	i = 0;
	len = 0;
	while (str[i])
		len += ft_putchar_fd(fd, str[i++]);
	len += ft_putchar_fd(1, '\n');
	return (len);
}
