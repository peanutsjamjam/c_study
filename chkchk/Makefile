
CXX = g++
CXXFLAGS += -pipe -Wall -g -std=c++14


program: main.o
	${CXX} ${CXXFLAGS} -o $@ $^

clean:
	rm -rf *.o core program
