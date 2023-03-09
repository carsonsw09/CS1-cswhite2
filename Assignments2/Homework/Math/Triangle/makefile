
CXX = g++

CXXFLAGS = -c -g -Wall -std=c++17


PROGRAM = library.exe


CPPFILES = library.cpp


all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)
	

clean:
	rm -f $(PROGRAM) *.o