all: generate

clean:
	rm -f main.o generate

generate: main.o
	g++ main.o -o generate

main.o: main.cpp
	g++ -c main.cpp
