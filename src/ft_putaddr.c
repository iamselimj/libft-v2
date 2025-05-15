/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:34:38 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:36:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int64	ft_putaddr(t_buffer *buf)
{
	t_int64	len;

	len = 0;
	if (!buf)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	len += ft_putstr("0x");
	len += ft_putnbr_base((unsigned long)buf, "0123456789abcdef");
	return (len);
}
