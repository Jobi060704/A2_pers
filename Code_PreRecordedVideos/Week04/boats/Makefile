.default: all

all: boats

clean:
	rm -f boats *.o

boats: Boat.o Mast.o Rudder.o Sail.o main.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
