# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 15:32:33 by cfavero           #+#    #+#              #
#    Updated: 2017/12/06 18:46:08 by cfavero          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_memccpy.c ft_putchar.c ft_putstr_fd.c ft_strdup.c \
	   ft_strmap.c ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c \
	   ft_putchar_fd.c ft_strcat.c ft_strequ.c ft_strmapi.c ft_strrchr.c \
	   ft_isascii.c ft_memcmp.c ft_putendl.c ft_strchr.c ft_striter.c \
	   ft_strncat.c ft_strsplit.c ft_isdigit.c ft_memcpy.c ft_putendl_fd.c \
	   ft_strclr.c ft_striteri.c ft_strncmp.c ft_strstr.c ft_isprint.c \
	   ft_memdel.c ft_putnbr.c ft_strcmp.c ft_strjoin.c ft_strncpy.c \
	   ft_strsub.c ft_atoi.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c \
	   ft_strcpy.c ft_strlcat.c ft_strnequ.c ft_strtrim.c ft_bzero.c \
	   ft_memalloc.c ft_memset.c ft_putstr.c ft_strdel.c ft_strlen.c \
	   ft_strnew.c ft_tolower.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	   ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_sqrt.c ft_is_prime.c \
	   ft_find_next_prime.c ft_swap.c ft_div_mod.c

FILEH 	= libft.h

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -I $(FILEH) -c -Wall -Wextra -Werror $(SRC) 
	@ar rc $(NAME) $(OBJ)
	@ranlib libft.a

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(ESE)

re: fclean all

.PHONY : all clean fclean re
