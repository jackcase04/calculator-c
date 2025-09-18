CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -g
BUILD_DIR = build
TARGET = $(BUILD_DIR)/calculator

SRC = $(shell find . -name "*.c")
OBJ = $(patsubst %.c, $(BUILD_DIR)/%.o, $(SRC))

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)
