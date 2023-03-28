//figure out why it won't work on kattis


#include <iostream>
#include <cassert> 
using namespace std; 
 
void sortNumbers(int& num1, int& num2) { //this is the function that sorts the numbers
  if (num1 > num2) { 
    int temp = num1; 
    num1 = num2; 
    num2 = temp; 
  } 
} 
 
void testSortNumbers() { //this is where all the test cases are done
  // Test cases where num1 > num2 
  int num1 = 5, num2 = 2; 
  sortNumbers(num1, num2); 
  assert(num1 == 2); 
  assert(num2 == 5); 
   
  // Test cases where num1 < num2 
  num1 = 10, num2 = 20; 
  sortNumbers(num1, num2); 
  assert(num1 == 10); 
  assert(num2 == 20); 
   
  // Test cases where num1 == num2 
  num1 = 5, num2 = 5; 
  sortNumbers(num1, num2); 
  assert(num1 == 5); 
  assert(num2 == 5); 
   
  // Test cases with negative numbers 
  num1 = -10, num2 = -5; 
  sortNumbers(num1, num2); 
  assert(num1 == -10); 
  assert(num2 == -5); 
} 
 
int main() { 
  int num1, num2; 
  cout << "Enter two whole numbers: ";
  cin >> num1 >> num2; 
   
  sortNumbers(num1, num2); 
  cout << "The numbers in increasing order are: " << num1 << " " << num2 << endl; 
   
  testSortNumbers(); 
  cout << "All tests passed!" << endl; 
   
  return 0; 
} 