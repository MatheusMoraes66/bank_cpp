CC = g++
CFLAGS = -Wall -Wextra -std=c++11

SRC_DIR = src
INC_DIR = include
BUILD_DIR = build
TARGET = program

ENTITYS = src/entitys

SRCS = $(shell find $(SRC_DIR) -name '*.cpp')
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

.PHONY: all clean

all: $(TARGET)

$(BUILD_DIR):
	@echo "Criando diretórios de build..."
	mkdir -p $(BUILD_DIR)
	mkdir -p $(BUILD_DIR)/entitys
	mkdir -p $(BUILD_DIR)/entitys/account

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	@echo "Compilando $<...$@ "
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(TARGET): $(OBJS)
	@echo "Linkando objetos para criar $@..."
	$(CC) $(CFLAGS) $^ -o $@

clean:
	@echo "Limpando arquivos de build..."
	rm -rf $(BUILD_DIR) $(TARGET)
