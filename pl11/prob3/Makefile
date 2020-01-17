all: complexos.o prob3.c
	clang prob3.c complexos.o -o prob3.bin -lm

complexos.o: complexos.c complexos.h
	clang -c complexos.c

clean:
	rm *.o prob3.bin *~