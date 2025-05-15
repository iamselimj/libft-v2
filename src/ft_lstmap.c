/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:18:52 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:51:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link_node	*ft_lstmap(t_link_node *lst, t_buffer *(*f)(t_buffer *),
		t_buffer (*del)(t_buffer *))
{
	t_link_node	*res;
	t_link_node	*new;
	t_buffer	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		tmp = f(lst->buf);
		new = ft_lstnew(tmp);
		if (!new)
		{
			del(tmp);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
