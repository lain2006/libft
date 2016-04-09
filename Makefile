TARGET = libft.a

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

$(TARGET): $(OBJ)
	$(LD) $@ $^

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re
