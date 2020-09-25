all: prog tests

prog: main.o func.o
	 gcc -o prog main.o func.o -lm

main.o: main.c
	gcc -c -o main.o main.c

func.o: func.c
	gcc -c -o func.o func.c

tests: test.o func.o
	 gcc -o tests test.o func.o -lm

test.o: test.c
	gcc -c -o test.o test.c

clean:
	rm -f *.o prog
	rm -f *.o tests

