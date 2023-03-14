//This is the menu program made by Carson White
//The goal of this program is to prompt the user to enter two numbers and too run 3 different functions that figure out different values. 
//There is then a unit test case being done on the functions.

//not done yet


#include <iostream>
#include <cassert> 
using namespace std; 

 
int findLargest(int num1, int num2, int num3, int num4, int num5) { 
  int largest = num1; // this assume the first number is the largest 
   
  // this checks if the remaining numbers are larger than the current largest 
  if (num2 > largest) { 
    largest = num2; 
  } 
  if (num3 > largest) { 
    largest = num3; 
  } 
  if (num4 > largest) { 
    largest = num4; 
  } 
  if (num5 > largest) { 
    largest = num5; 
  } 
   
  return largest; 
} 

int findSmallest(int num1, int num2, int num3, int num4, int num5) { 
  int smallest = num1; // this assume first number is the smallest 
   
  // this checks if the remaining numbers are smaller than the current smallest 
  if (num2 < smallest) { 
    smallest = num2; 
  } 
  if (num3 < smallest) { 
    smallest = num3; 
  } 
  if (num4 < smallest) { 
    smallest = num4; 
  } 
  if (num5 < smallest) { 
    smallest = num5; 
  } 
   
  return smallest; 
} 

string sumFloorType(float num1, float num2, float num3, float num4, float num5) { //this function finds the sum of the numbers
  float sum = num1 + num2 + num3 + num4 + num5; 
  float floorSum = sum / 1; 
  if (floorSum == 0) { 
    return "zero"; 
  } 
  else if (floorSum/2 == 0) { 
    return "even"; 
  } 
  else { 
    return "odd"; 
  } 
} 

void test() { 
  // Test cases for findLargest() 
  assert(findLargest(1, 2, 3, 4, 5) == 5); 
  assert(findLargest(-10, 5, 8, 0, -3) == 8); 
  assert(findLargest(10, 10, 10, 10, 10) == 10); 
   
  // Test cases for findSmallest() 
  assert(findSmallest(1, 2, 3, 4, 5) == 1); 
  assert(findSmallest(-10, 5, 8, 0, -3) == -10); 
  assert(findSmallest(10, 10, 10, 10, 10) == 10); 
   
  // Test cases for sumFloorType() 
  assert(sumFloorType(1, 2, 3, 4, 5) == "odd"); 
  assert(sumFloorType(-10, 5, 8, 0, -3) == "even"); 
  assert(sumFloorType(10, 10, 10, 10, -40) == "zero"); 
} 

 //figure out a way to fix the float sum function in this main part

int main() { 
  int num1, num2, num3, num4, num5; 
  cout << "Enter five numbers: "; 
  cin >> num1 >> num2 >> num3 >> num4 >> num5;
  //Find a switch code that displays the different functions that the user can enter 
   
  int largest = findLargest(num1, num2, num3, num4, num5); 
  cout << "The largest number is " << largest << endl; 

  int smallest = findSmallest(num1, num2, num3, num4, num5);
  cout << "The smallest number is " << smallest << endl;

  string sum = sumFloorType(num1, num2, num3, num4, num5);
  cout << "The sum of all the number is " << sum << endl;
   
  return 0; 
} 







