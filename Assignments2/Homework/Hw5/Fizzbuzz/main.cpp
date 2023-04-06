//My name is Carson White and I am a computer science major at Colorado Mesa University
//1)The first step of the program is to define the printFizzBuzz function using an if else statement
//2)The second step is to define the unit test with 4 different test cases


//program needs a fix on the test cases


#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int printFizzBuzz(int X, int Y, int N) {
    for (int i = 1; i <= N; i++) {
        if (i % X == 0 && i % Y == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % X == 0) {
            cout << "Fizz" << endl;
        } else if (i % Y == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}
 void unitTest() {
    
    assert(printFizzBuzz(2, 3, 7) == "1 Fizz Buzz Fizz 5 FizzBuzz 7");

    assert(printFizzBuzz(2, 4, 7) == "1 Fizz 3 FizzBuzz 5 Fizz 7");

    assert(printFizzBuzz(3, 5, 7) == "1 2 Fizz 4 Buzz Fizz 7");

    assert(printFizzBuzz(4, 5, 10) == "1 2 3 Fizz Buzz 6 7 Fizz 9 10");


    cout << "All test cases passed!" << endl;

    
}

int main(){
   unitTest();
   int  X, Y, N;
   cin >> X >> Y >> N;

   return printFizzBuzz(X, Y, N);

   
    
    




}
