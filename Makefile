# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 15:22:59 by sjacquet          #+#    #+#              #
#    Updated: 2025/05/15 14:04:33 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= inc

CC              = cc
CFLAGS		= -Wall -Wextra -Werror -g
IFLAGS		= -I$(INC_DIR)

SRCS		= $(addprefix $(SRC_DIR)/ft_, $(addsuffix .c, islower isupper isalpha isdigit isalnum isascii isprint isspace issign isinset strlen numlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup substr strjoin strtrim split itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd putaddr_fd putchar putstr putnbr putnbr_uns putnbr_base putnbr_base_fd putaddr putaddr_fd lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap))

OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

norm:
	clear && norminette .

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
