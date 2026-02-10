CC=gcc
CFLAGS=-I.

# Definição dos arquivos objetos (o que quero gerar antes do executável)
OBJ=main.o functions.o

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# Gerar cada arquivo .o a partir de seu respectivo .c
%.o: %.c arithmetics.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -rf *.o main
