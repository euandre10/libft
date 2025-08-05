# -*- Makefile -*-

# Directories
INCLUDE_DIR = include
SOURCES_DIR = source
OBJECTS_DIR = object
LIB_DIR = static_lib

# Variables
CC = clang
CFLAGS = -I $(INCLUDE_DIR) -Werror -Wall -Wextra -g
SOURCES = $(wildcard $(SOURCES_DIR)/*.c)
OBJECTS = $(patsubst $(SOURCES_DIR)/%.c, $(OBJECTS_DIR)/%.o, $(SOURCES))
LIB = $(LIB_DIR)/libft.a

all: $(LIB)

$(LIB): $(OBJECTS)
	@mkdir -p $(LIB_DIR)
	@ar rcs $(LIB) $(OBJECTS_DIR)/*.o

$(OBJECTS_DIR)/%.o: $(SOURCES_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

main: main.c $(LIB)
	$(CC) $(CFLAGS) main.c $(LIB) -o program

.PHONY: clean
clean:
	rm -rf $(OBJECTS_DIR) $(LIB_DIR) program
