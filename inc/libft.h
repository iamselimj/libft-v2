/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:21:21 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/15 13:51:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "packages.h"
# include "types.h"

typedef void			t_buffer;

typedef struct s_link_node
{
	t_buffer			*buf;
	struct s_link_node	*next;
}						t_link_node;

/* BOOL */
t_int32					ft_isupper(t_int32 c);
t_int32					ft_islower(t_int32 c);
t_int32					ft_isalpha(t_int32 c);
t_int32					ft_isdigit(t_int32 c);
t_int32					ft_isalnum(t_int32 c);
t_int32					ft_isascii(t_int32 c);
t_int32					ft_isprint(t_int32 c);
t_int32					ft_isspace(t_int32 c);
t_int32					ft_issign(t_int32 c);
t_int32					ft_isinset(t_int32 c, const t_string *set);

t_buffer				*ft_bzero(t_buffer *buf, t_uint64 size);
t_buffer				*ft_calloc(t_uint64 count, t_uint64 size);
t_buffer				*ft_memset(t_buffer *buf, t_int32 c, t_uint64 size);
t_buffer				*ft_memcpy(t_buffer *dst, const t_buffer *src,
							t_uint64 size);
t_buffer				*ft_memmove(t_buffer *dst, const t_buffer *src,
							t_uint64 size);
t_buffer				*ft_memchr(const t_buffer *buf, t_int32 c,
							t_uint64 size);
t_int32					ft_memcmp(const t_buffer *buf1, const t_buffer *buf2,
							t_uint64 size);

t_uint64				ft_strlen(const t_string *str);
t_int32					ft_toupper(t_int32 c);
t_int32					ft_tolower(t_int32 c);
t_uint64				ft_strlcpy(const t_string *src, t_string *dst,
							t_uint64 len);
t_uint64				ft_strlcat(const t_string *src, t_string *dst,
							t_uint64 len);
t_string				*ft_strchr(const t_string *str, t_int32 c);
t_string				*ft_strrchr(const t_string *str, t_int32 c);
t_int32					ft_strncmp(const t_string *str1, const t_string *str2,
							t_uint64 len);
t_string				*ft_strnstr(const t_string *str1, const t_string *str2,
							t_uint64 len);

t_string				**ft_split(const t_string *str, t_int32 c);
t_string				*ft_strdup(const t_string *str);
t_string				*ft_substr(const t_string *str, t_uint64 start,
							t_uint64 size);
t_string				*ft_strjoin(const t_string *str1, const t_string *str2);
t_string				*ft_strtrim(const t_string *str, const t_string *set);
t_string				*ft_strmapi(const t_string *str, t_string (*f)(t_uint32,
								t_string));
t_int32					ft_striteri(t_string *str, t_buffer (*f)(t_int32,
								t_string *str));

t_uint64				ft_numlen(t_int64 num);
t_int32					ft_atoi(const t_string *str);
t_string				*ft_itoa(t_int32 num);

t_int64					ft_putchar(t_int32 c);
t_int64					ft_putstr(t_string *str);
t_int64					ft_putnbr(t_int64 num);
t_int64					ft_putaddr(t_buffer *buf);
t_int64					ft_putnbr_uns(t_uint64 num);
t_int64					ft_putnbr_base(t_uint64 num, t_string *base);

t_int64					ft_putchar_fd(t_int32 fd, t_int32 c);
t_int64					ft_putstr_fd(t_int32 fd, t_string *str);
t_int64					ft_putendl_fd(t_int32 fd, t_string *str);
t_int64					ft_putnbr_fd(t_int32 fd, t_int64 num);
t_int64					ft_putnbr_base_fd(t_int32 fd, t_uint64 num,
							t_string *base);
t_int64					ft_putaddr_fd(t_int32 fd, t_buffer *buf);

t_link_node				*ft_lstnew(t_buffer *buf);
t_int32					ft_lstadd_front(t_link_node **list, t_link_node *new);
t_uint64				ft_lstsize(t_link_node *list);
t_link_node				*ft_lstlast(t_link_node *list);
t_int32					ft_lstadd_back(t_link_node **list, t_link_node *new);
t_int32					ft_lstdelone(t_link_node *list,
							t_buffer (*del)(t_buffer *));
t_int32					ft_lstclear(t_link_node **list,
							t_buffer (*del)(t_buffer *));
t_int32					ft_lstiter(t_link_node *list,
							t_buffer (*f)(t_buffer *));
t_link_node				*ft_lstmap(t_link_node *list,
							t_buffer *(*f)(t_buffer *),
							t_buffer (*del)(t_buffer *));

#endif
