all: practica0

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

practica0: main.o BrazoRobotico.o
	g++ -o practica0 main.o BrazoRobotico.o

clear:
	rm -f *.o practica0

test: all
	./practica0
