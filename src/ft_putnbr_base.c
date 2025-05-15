/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:25:29 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:44:57 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int64	ft_putnbr_base(t_uint64 num, t_string *base)
{
	t_int64		len;
	t_uint64	blen;

	len = 0;
	blen = ft_strlen(base);
	if (num >= blen)
		len += ft_putnbr_base(num / blen, base);
	len += ft_putchar(base[num % blen]);
	return (len);
}
