# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 15:13:04 by tabreia-          #+#    #+#              #
#    Updated: 2022/11/18 08:06:26 by tabreia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Werror -Wextra -I.
DEPS=libft.h

SRC=$(filter-out $(shell find -type f -name '*_bonus.c'), $(shell find -type f -name '*.c'))
OBJ=$(SRC:.c=.o)
BONUS=$(shell find -type f -name '*_bonus.c')
BONUS_OBJ=$(BONUS:.c=.o)
NAME=libft.a

all: $(NAME)
$(NAME): $(OBJ) $(DEPS)
	@ar rcs $(NAME) $(OBJ)
clean:
	@rm -rf $(OBJ) $(BONUS_OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
bonus: $(OBJ) $(BONUS_OBJ) $(DEPS)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
