# my_lib/Makefile
TARGET_LIB = libmy_lib.so
TARGET_BIN = test
CC = gcc
CFLAGS  = -g -Wall -Wextra -Werror -Wunused -O0

all: $(TARGET_LIB) $(TARGET_BIN)

$(TARGET_LIB): my_lib.o
	$(CC) -o $(TARGET_LIB) -shared my_lib.o

$(TARGET_BIN): test.o $(TARGET_LIB)
	$(CC) -o $(TARGET_BIN) test.o -L. -lmy_lib -Wl,-rpath,.

my_lib.o: my_lib.c
	$(CC) $(CFLAGS) -fPIC -o my_lib.o -c my_lib.c

test.o: test.c
	$(CC) $(CFLAGS) -o test.o -c test.c

clean:
	rm -rf *.{o,so} $(TARGET_LIB) $(TARGET_BIN)
