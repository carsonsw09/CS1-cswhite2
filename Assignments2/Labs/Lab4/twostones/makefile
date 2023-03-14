
CXX = g++

CXXFLAGS = -c -g -Wall -std=c++17


PROGRAM = twostones.exe


CPPFILES = main.cpp


all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)
clean:
	rm -f $(PROGRAM) *.o
test:
	cat 1.in | ./$(PROGRAM) | diff - 1.ans
	cat 2.in | ./$(PROGRAM) | diff - 2.ans
	cat 3.in | ./$(Program) | diff - 3.ans