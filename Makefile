# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/06 19:57:21 by cfavero           #+#    #+#              #
#    Updated: 2017/12/07 18:03:18 by cfavero          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fillit
SRC			=	srcs/main.c \
				srcs/check.c \
				srcs/check2.c \
				srcs/source.c \
				srcs/movepezzi.c \
				srcs/cut.c \
				srcs/findsqr.c \
				srcs/solve.c \
				srcs/pff.c \
				srcs/reset_tetr.c 
OBJ			=	$(SRC:.c=.o)
INCLUDES	=	-I libft -I includes
LIBS		=	-L libft/ -lft
FLAGS		=	-Wall -Werror -Wextra

all : $(NAME)

$(NAME):	$(OBJ)
	@make -C libft/ re
	@gcc -o $(NAME) $(OBJ) $(LIBS)

$(OBJ):	%.o: %.c
	@gcc $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@make -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all
