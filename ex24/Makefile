# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/22 14:48:36 by rapdos-s          #+#    #+#              #
#    Updated: 2022/05/23 19:26:15 by rapdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= libft.a

HEADER		= includes/

C_SRCS		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

H_SRCS		= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

CC			= gcc

FLAGS		= -Wall -Wextra -Werror -c -I

RM			= /bin/rm -f

$(NAME):
			$(CC) $(FLAGS) $(HEADER) $(C_SRCS)
			ar rcs $(NAME) $(H_SRCS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)
			
fclean:		clean
			$(RM) $(NAME)

re:			clean all

.PHONY:		all clean fclean re