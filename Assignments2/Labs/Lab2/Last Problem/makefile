 compiler name
CXX = g++
# c++ compiler flags
# -g : adds debugging information to the executable file
# -Wall : turns on most, but not  all, compiler warnings
# -std=C++17 : uses c++17 standard
# put all the required flags separated by space
CXXFLAGS = -c -g -Wall -std=c++17

# the build target executable file; .exe is not required
PROGRAM = Lastproblem.exe

# list .cpp files separated by space
CPPFILES = Lastproblem.cpp

# make build rule/default rule that'll be run when we run "make"
# first compile each file to object file
# then make a single binary program
all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)
	
# make clean rule
# delete object and binary files
clean:
	rm -f $(PROGRAM) *.o

test:
	cat 1.in | ./$(PROGRAM) | diff - 1.ans
	cat 2.in | ./$(PROGRAM) | diff - 2.ans
	cat 3.in | ./$(PROGRAM) | diff - 3.ans
	cat 4.in | ./$(PROGRAM) | diff - 4.ans
	cat 5.in | ./$(PROGRAM) | diff - 5.ans
	cat 6.in | ./$(PROGRAM) | diff - 6.ans
	
	@#FIXME - Add commands to test 4 more input files//fixed
	@echo "All test cases passed!"

