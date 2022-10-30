SRC = $(wildcard *.c)
OBJ	= $(SRC:.c=.o)

NAME    = libftprintf.a

FLAGS    = -Wall -Wextra -Werror

CC	= gcc

RM	= rm -f

all:	$(NAME)

$(NAME):    $(OBJ)
	    ar rcs $(NAME) $(OBJ)

%.o	:    %.c
	    $(CC) $(FLAGS) -c $< -o $@

clean:
	    $(RM) $(OBJ)

fclean:	clean
	    $(RM) $(NAME)

re:	    fclean all    %






# Cflags = -Wall -Wextra -Werror
# CC = gcc

# NAME = libftprintf.a
# SRC = $(wildcard *.c)
# OBJ = $(SRC:.c=.o) 

# all : $(NAME)

# $(NAME) : $(OBJ)
# 		ar rcs $(OBJ) $(NAME)

# clean : 
# 		rm -rf $(OBJ)

# fclean : clean
# 		rm -rf $(NAME)
