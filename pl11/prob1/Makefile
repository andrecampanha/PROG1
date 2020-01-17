all: polinomios.o prob1.c
	clang prob1.c polinomios.o -o prob1.bin

polinomios.o: polinomios.c polinomios.h
	clang -c polinomios.c

clean:
	rm *.o prob1.bin *~