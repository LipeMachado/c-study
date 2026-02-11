CC = gcc
CFLAGS = -I. -Wall -Wextra -std=c99

# Definition of the object files (what I want to generate before the executable)
OBJ = main.o functions.o UI.o

# Generate each .o file from its respective .c file
%.o: %.c arithmetics.h
	$(CC) -c $< $(CFLAGS)

# Final executable
main: $(OBJ)
	$(CC) -o main $(OBJ)

clean:
	rm -rf *.o main
