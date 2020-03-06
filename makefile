main: func.o
	g++ -std=c++17 -o main ketvirtaUzd.cpp func.o
fun:
	g++ c- func.cpp
run:
	./main