# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/12 18:59:52 by sbrochar          #+#    #+#              #
#    Updated: 2016/04/13 15:12:21 by sbrochar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR = .
SRC_DIR = .
OBJ_DIR = ./obj

INC = $(shell ls $(INC_DIR) | grep .h)
SRC = $(shell find $(SRC_DIR) -maxdepth 1 -name "*.c" -type f)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

CC = clang
CFLAGS = -c -Wall -Wextra -Werror -I$(INC_DIR)
LD = ar rcs

RM = rm -f

$(NAME): $(OBJ)
	$(LD) $@ $^

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
