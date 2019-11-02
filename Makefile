# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dkrecisz <dkrecisz@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/31 11:38:08 by dkrecisz      #+#    #+#                  #
#    Updated: 2019/11/02 18:11:33 by dkrecisz      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=$(FILES:%=ft_%.c)
OBJ=$(FILES:%=ft_%.o)

FILES=tolower toupper isprint isascii isalpha \
	  isdigit isalnum atoi strlen strncmp \
	  strnstr strlcpy strlcat strrchr strchr \
	  bzero memset

SRCP=./
OBJP=./

CFLAGS=-g -Wall -Wextra -Werror

INCLUDES=-I ./

all: $(NAME)

$(NAME): $(SRC) libft.h
	gcc $(CFLAGS) $(INCLUDES) -c $(SRCP)$(SRC)
	ar rc $(NAME) $(OBJP)$(OBJ)
	ranlib $(NAME)

debug: $(NAME) main.c
	gcc $(CFLAGS) $(INCLUDES) -L . -o debug main.c -lft

clean: 
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
