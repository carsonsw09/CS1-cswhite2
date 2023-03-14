/*
Kattis - Take Two Stones
Conditional Logic Lab
Updated By: Carson White
CSCI 111
Date: 3/11/23
Read and solve the Kattis problem: https://open.kattis.com/problems/twostones 
Algorithm Steps:
  1. Read the number of stones
  2. Check if the number of stones is odd or even
  3.a. If the number is odd, Alice wins.
  3.b. Otherwise, Bob wins.
*/

// not done yet

#include <iostream>
#include <cassert>
#include <string>
using namespace std;

// Function prototypes
// given a positive integer, the function finds and returns 'even' or 'odd'
string oddOrEven( int num1);
// function to test oddOrEven function
void testOddOrEven();
// given a positive integer, function returns the answer as expected by Kattis
string answer(int num1);

void testanswer();

int main(int argc, char* argv[]) {
  if (argc == 2 and string(argv[1]) == string("test")) {
    testOddOrEven();
    int num1;
    string answer;

    // FIXME1: call testOddOrEven function that unit tests oddOrEven function//fixed
    testanswer();
    // FIXME2: call the test function that unit tests answer function//fixed
  }
  else {
    unsigned int stones=0;//fix this part
    // FIXME3: readin the stones
    cout << answer(stones) << endl;
  }
  return 0;
}

string oddOrEven(int num1) {
  // FIXME4: if the number divided by 2 has 0 remainder, return 'even'
  // otherwise, return 'odd'//fixed
  if (num1 % 2 == 0) {
    cout << "even" << endl;
  } else {
    cout << "odd" << endl;
  }
return 0;
  
  
}

string answer(const int unsigned stone) {
  string evenorodd = oddOrEven(stone);
  if (evenorodd == "odd") return "Alice";
  else return "Bob";
}

void testOddOrEven() {
 
  assert(oddOrEven(99) == "odd");
  // FIXME5: Write 2nd test case//fixed
  assert(oddOrEven(4) == "even");
  // FIXME6: Write 3rd test case//fixed
  
  assert(oddOrEven(3) == "odd");
  cerr << "All test cases passed for oddOrEven() !\n";
}

void testanswer(){

  assert(answer(0) == "Bob");
  assert(answer(1) == "Alice");
  assert(answer(2) == "Bob");
  


}
// FIXME7: Write a function to test answer function//fixed
// Write at least 3 test cases
