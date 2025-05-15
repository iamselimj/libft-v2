/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:57 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:49:49 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_lstdelone(t_link_node *list, t_buffer (*del)(t_buffer *))
{
	if (!list || !del)
		return (FAILURE);
	del(list->buf);
	free(list);
	return (SUCCESS);
}
