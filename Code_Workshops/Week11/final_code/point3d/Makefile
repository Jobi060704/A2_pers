.default: all

PROGRAMS=point3d

all: $(PROGRAMS)

clean:
	rm -rf $(PROGRAMS) *.o *.dSYM

point3d: main.o Point3D.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
