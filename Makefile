# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 12:43:25 by khaimer           #+#    #+#              #
#    Updated: 2022/11/01 12:44:29 by khaimer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    = libftprintf.a

FLAGS    = -Wall -Wextra -Werror

CC	= gcc

RM	= rm -f

SRC = 	ft_printf.c my_adress.c my_hex_low.c my_hex_up.c my_putchar.c my_putnbr.c my_putstr.c  my_unsigned_int.c 


OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o	: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
