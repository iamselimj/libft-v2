/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:17:58 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:50:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_lstiter(t_link_node *list, t_buffer (*f)(t_buffer *))
{
	t_link_node	*tmp;

	if (!list || !f)
		return (FAILURE);
	tmp = list;
	while (tmp)
	{
		f(tmp->buf);
		tmp = tmp->next;
	}
	return (SUCCESS);
}
