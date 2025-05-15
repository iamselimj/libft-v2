/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:14:12 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:46:45 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_lstadd_front(t_link_node **list, t_link_node *new)
{
	if (!list || !new)
		return (FAILURE);
	new->next = *list;
	*list = new;
	return (SUCCESS);
}
