CC = gcc
CPPFLAGS =
CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror -Wvla
LDFLAGS =
LDLIBS =

BIN = basics
OBJ = basics.o
TOBJ = tests.o

$(BIN): $(OBJ) main.o

debug: CFLAGS += -g3
debug: $(OBJ) main.o
	$(CC) $(CFLAGS) $(OBJ) -o $(BIN)

check: CFLAGS += -g3 -fsanitize=address
check: LDFLAGS += -fsanitize=address
check: LDLIBS += -lcriterion
check: $(OBJ) $(TOBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) $(OBJ) $(TOBJ) -o $(BIN)
	./basics

clean:
	$(RM) $(BIN)
	$(RM) $(OBJ) main.o
	$(RM) $(TOBJ)

.PHONY: debug check clean
