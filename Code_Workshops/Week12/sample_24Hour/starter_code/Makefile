.default: all

PROGRAMS=image

all: $(PROGRAMS)

clean:
	rm -rf $(PROGRAMS) *.o *.dSYM

image: main.o RGBPixel.o GreyscalePixel.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
