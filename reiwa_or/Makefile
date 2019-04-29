
CC  = /usr/local/bin/gcc
CXX = /usr/local/bin/g++
CXXFLAGS += -std=c++11 -Wall -g


program: main.o
	${CXX} ${CXXFLAGS} -o $@ $^

clean:
	rm -f program *.o
