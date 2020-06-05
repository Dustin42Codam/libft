# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dkrecisz <dkrecisz@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/15 19:33:12 by dkrecisz       #+#    #+#                 #
#    Updated: 2020/02/10 19:27:34 by dkrecisz      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME_MAC = libft.a

NAME_LX = libft.so

TARGET := $(shell uname -s)
ifeq ($(TARGET),Linux)
	NAME = $(NAME_LX)
else
	NAME = $(NAME_MAC)
endif

SRC = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalpha.c \
	  ft_isdigit.c ft_isalnum.c ft_atoi.c ft_strlen.c ft_strncmp.c \
	  ft_strnstr.c ft_strlcat.c ft_strrchr.c ft_strchr.c ft_strlcpy.c \
	  ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	  ft_memcmp.c ft_memchr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c \
	  ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_strldup.c ft_utoa.c ft_putnbr_unsigned_fd.c ft_atoi_base.c \
	  ft_itoa_base.c ft_utoa_base.c ft_ultoa_base.c ft_ltoa_base.c \
	  ft_ultoa_base_low.c ft_malloc_wrap.c 

BSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BSRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) -c $(SRC)
	@ar rcs $(NAME) $(OBJ)

bonus: $(NAME) | $(BONUSOBJ)
	@ar rcs $(NAME) $|

clean:
	@rm -f $(OBJ) $(BONUSOBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

so: all
