RM=/bin/rm
GCC=gcc

NAME=boilermaker

LFLAGS = 
CFLAGS = -Wall -g -o3 -std=gnu99

SRC=src
BUILD=build
BIN=bin

S = $(wildcard $(SRC)/*.c)
H = $(wildcard $(SRC)/inc/*.h)
O = $(patsubst $(SRC)/%.c, $(BUILD)/%.o, $(S))

$(BIN)/$(NAME): $(O)
	@echo "Linking..."
	@$(GCC) $(CFLAGS) -o $(BIN)/$(NAME) $(LFLAGS) $(O)
	@echo "..done"

$(BUILD)/%.o: $(SRC)/%.c
	@$(GCC) $(CFLAGS) -c -o $@ $<
	@echo "Compilation of $< finished"

.PHONY: clean
clean:
	@echo "Deleting *.o files"
	@$(RM) $(O)
	@echo "Deleting $(NAME) binary"
	@$(RM) $(BIN)/$(NAME)