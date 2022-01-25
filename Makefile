CC=clang
CFLAGS=`pkg-config --cflags raylib` -std=c99
LIBS=`pkg-config --libs raylib`

MKDIR=mkdir -p
RMDIR=rm -rf

SRC_DIR=src
OUT_DIR=build

OBJS=$(OUT_DIR)/sokoban.o

all: $(OUT_DIR) $(OBJS)
	$(CC) $(OBJS) -o $(OUT_DIR)/sokoban $(LIBS)

run: all
	$(OUT_DIR)/sokoban

clean:
	$(RMDIR) $(OUT_DIR)

.PHONY: clean

$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $< -o $@ $(CFLAGS)

$(OUT_DIR):
	$(MKDIR) $(OUT_DIR)

