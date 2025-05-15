/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:13:33 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 12:45:59 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link_node	*ft_lstnew(t_buffer *buf)
{
	t_link_node	*new;

	new = ft_calloc(1, sizeof(t_link_node));
	if (!new)
		return (NULL);
	new->buf = buf;
	new->next = NULL;
	return (new);
}
