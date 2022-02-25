# Define compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -g

# Top level target
# gcc -o main main.o mylib.o
main: main.o mylib.o

# Implicit rule: .c -> .o
# gcc -c main.c
# main.o: main.c

# Explicitly mention targets with .h dependencies
# gcc -c mylib.c
mylib.o: mylib.c mylib.h

# Other targets can be referenced by name and run commands
clean:
	rm -rf main *.o
