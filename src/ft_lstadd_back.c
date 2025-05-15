/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:45 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:49:24 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_lstadd_back(t_link_node **list, t_link_node *new)
{
	t_link_node	*last;

	if (!list || !new)
		return (FAILURE);
	if (!*list)
	{
		*list = new;
		return (SUCCESS);
	}
	last = ft_lstlast(*list);
	if (!last)
		return (FAILURE);
	last->next = new;
	return (SUCCESS);
}
