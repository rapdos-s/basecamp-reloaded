# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 00:19:48 by rapdos-s          #+#    #+#              #
#    Updated: 2022/05/26 05:56:44 by rapdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file
C_SRCS		= ft_display_file.c
O_SRCS		= ft_display_file.o
CC			= gcc
RM			= /bin/rm -f
FLAGS		= -Wall -Wextra -Werror -o

all:		$(NAME)

$(NAME):
			$(CC) $(FLAGS) $(NAME) $(C_SRCS)

clean:
			$(RM) $(O_SRCS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
