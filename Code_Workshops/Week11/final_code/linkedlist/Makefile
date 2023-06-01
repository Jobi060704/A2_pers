.default: all

all: linkedlist

clean:
	rm -f linkedlist *.o

linkedlist: LinkedList.o LinkedListSize.o main.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
