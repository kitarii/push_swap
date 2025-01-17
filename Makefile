# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 00:13:51 by ktiyari           #+#    #+#              #
#    Updated: 2024/06/13 00:13:54 by ktiyari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = push_swap.c push.c swap.c rotate.c reverse_rotate.c split.c \
	check_args.c checkerror_utils.c push_swap_utils.c \
	funs_moves.c algo_sort.c small_sort_utils.c small_sort.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.SECONDARY: $(OBJ)