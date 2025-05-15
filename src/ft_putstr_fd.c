/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:22 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:33:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int64	ft_putstr_fd(t_int32 fd, t_string *str)
{
	t_int64		len;
	t_uint64	i;

	i = 0;
	len = 0;
	while (str[i])
		len += ft_putchar_fd(fd, str[i++]);
	return (len);
}
