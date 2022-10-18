# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 11:29:59 by crtorres          #+#    #+#              #
#    Updated: 2022/10/18 16:23:21 by crtorres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
		libft/ft_putchar.c \
		libft/ft_putstr.c \
		libft/ft_putnbr.c \
		libft/ft_putnbr_uns.c \
		libft/ft_putnbr_base_uns.c \
		libft/ft_printparam.c \
		libft/ft_strlen.c \
		libft/ft_hexpointer.c \
		libft/ft_putnbr_base_unslng.c \
		libft/ft_checkparam.c \

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME) $(OBJS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	
fclean:
	$(RM) $(NAME) $(OBJS)
	
re: fclean all

.PHONY: all re clean fclean
