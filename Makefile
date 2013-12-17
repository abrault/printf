# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/16 16:13:13 by abrault           #+#    #+#              #
#    Updated: 2013/12/17 17:13:24 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

SRC_2 = ft_putchar.c \
		ft_putstr.c

OBJ = ft_printf.o

OBJ_2 = ft_putstr.o \
		ft_putchar.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC) $(SRC_2)
	ar rc $(NAME) $(OBJ) $(OBJ_2);
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_2)

fclean:
	rm -f $(NAME)

re : fclean all

main:
	gcc $(FLAG) -c main.c
	gcc $(FLAG) $(NAME) main.o

mclean:
	rm -f $(OBJ) $(OBJ_2) main.o
