/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:34:38 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:37:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int64	ft_putaddr_fd(t_int32 fd, t_buffer *buf)
{
	t_int64	len;

	len = 0;
	if (!buf)
	{
		len += ft_putstr_fd(fd, "(nil)");
		return (len);
	}
	len += ft_putstr_fd(fd, "0x");
	len += ft_putnbr_base_fd(fd, (t_uint64)buf, BA16L);
	return (len);
}
