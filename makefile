main: func.o
	g++ -std=c++17 -o main treciaUzd.cpp func.o
fun:
	g++ c- func.cpp
run:
	./main