# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/16 16:13:13 by abrault           #+#    #+#              #
#    Updated: 2013/12/17 16:28:54 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = ft_printf.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC) -I/usr/X11R6/include
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) main.o

fclean:
	rm -f $(NAME)

re : fclean all

main:
	gcc $(FLAG) -c main.c -I/usr/X11R6/include
	gcc $(FLAG) $(NAME) libft.a main.o -L/usr/X11R6/lib -lX11
