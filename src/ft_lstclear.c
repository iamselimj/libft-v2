/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:17:06 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:45:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_lstclear(t_link_node **list, t_buffer (*del)(t_buffer *))
{
	t_link_node	*tmp;

	if (!list || !del)
		return (FAILURE);
	while (*list)
	{
		tmp = (*list)->next;
		ft_lstdelone(*list, del);
		*list = tmp;
	}
	return (SUCCESS);
}
