#
#
#
#
#
#
#
#
#
#
#

TARGET = libft.a

INC_DIR = ./inc
SRC_DIR = ./src
OBJ_DIR = ./obj

INC = $(shell ls $(INC_DIR) | grep .h)
SRC = $(shell ls $(SRC_DIR) | grep .c)
OBJ = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC))

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -I$(INC_DIR) -g
LD = ar rcs

RM = rm -rf

all: $(TARGET)

$(TARGET): $(OBJ)
	$(LD) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re
