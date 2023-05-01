CXX = g++

CXXFLAGS = -c -g -Wall -std=c++17


PROGRAM = Lab10.exe


CPPFILES = fileio.cpp


all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)


clean:
	rm -f $(PROGRAM) *.o
unittest:
	./$(PROGRAM) "test"

all: build unittest clean
	@echo "All done!"
