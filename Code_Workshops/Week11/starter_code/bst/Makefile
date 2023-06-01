.default: all

PROGRAMS=bst

all: $(PROGRAMS)

clean:
	rm -rf $(PROGRAMS) *.o *.dSYM

bst: main.o Card.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
