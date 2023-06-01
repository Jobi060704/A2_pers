.default: all

all: red7

clean:
	rm -f red7 *.o

red7: Card.o utils.o red7.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
