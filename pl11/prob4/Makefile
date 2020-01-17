all: artigos.o programa.c
	clang programa.c artigos.o -o programa.bin

artigos.o: artigos.c artigos.h
	clang -c artigos.c

clean:
	rm *.o programa.bin *~