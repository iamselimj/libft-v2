/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacquet <sjacquet@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:20:35 by sjacquet          #+#    #+#             */
/*   Updated: 2024/11/04 14:20:35 by sjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int64	ft_putnbr_fd(t_int32 fd, t_int64 num)
{
	t_int64	d;
	t_int64	len;

	len = 0;
	if (num == -2147483648)
		return (ft_putstr_fd(fd, "-2147483648"));
	if (num < 0)
	{
		len += ft_putchar_fd(fd, '-');
		return (len + ft_putnbr_fd(fd, -num));
	}
	if (num > 9)
	{
		len += ft_putnbr_fd(fd, num / 10);
		num %= 10;
	}
	d = num + '0';
	return (len + ft_putchar_fd(fd, d));
}
