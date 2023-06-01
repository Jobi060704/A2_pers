.default: all

all: red7

clean:
	rm -f red7 *.o

red7: Card.o red7.o Rule.o Player.o Deck.o utils.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
