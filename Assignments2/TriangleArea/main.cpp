/*
Kattis - Triangle Area problem
Function and Unit Testing
Updated By: Carson White
CSCI 111
Date: 3/4/23
Read and solve Triangle Area problem: https://open.kattis.com/problems/triarea 
Algorithm:
		1. Read height and base of a right triangle
		2. Define a function to find and return area given height and base of a right triangle
      2.a Area is given by the equation: (Base * Height)/2
    3. Call the function to find and print the result
    4. Write a test function to test the area function implemented in step 2
*/

#include <iostream>
#include <cstdio>
#include <cassert> //assert function
#include <string>
using namespace std;

// Function prototypes
// Function finds the answer from given string and restuns the result as a string
float areaOfTriangle(unsigned int height, unsigned int base);
// function to test area function
void testArea();
void testArea2();
void testArea3();
void testArea4();
#define MAX_ERROR 1e-7 // 10^-7 or 0.0000001

int main()
{
  // call testArea function
  testArea();
  unsigned height, base;
  float answer;
  // read height and base into corresponding variables
  cin >> height >> base;
	// FIXME1: Call area function passing proper arguments
	// store the returned result into answer variable
	answer = 0;
	// print answer
	printf("%.7f\n", answer);
	return 0;
}

// Function implementation
float areaOfTriangle(float height, float base) {
  float area = 0;
  area = (base * height) / 2.0;
    return area;
  // FIXME2: Find the area of traingle using the formular given in algorithm step: 2.a//fixed
  // store the area into area variable

} 

// function to test area function
void testArea() {
  unsigned int height, base;
  float answer, expected;
  height = 10;
  base = 5;
  answer = areaOfTriangle(height, base);
  expected = 25.0;
  assert(abs(answer-expected) < MAX_ERROR);}
void testArea2(){
  unsigned int height, base;
  float answer, expected;
  height = 1;
  base = 1;
  answer = areaOfTriangle(height, base);
  expected = .5;
  assert(abs(answer-expected) < MAX_ERROR);





}
  
  // FIXME3: Write 2nd test case//fixed
  void testArea3(){
  unsigned int height, base;
  float answer, expected;
  height = 2;
  base = 2;
  answer = areaOfTriangle(height, base);
  expected = 2;
  assert(abs(answer-expected) < MAX_ERROR);}
  // FIXME4: Write 3rd test case//fixed
  void testArea4(){
  unsigned int height, base;
  float answer, expected;
  height = 10;
  base = 10;
  answer = areaOfTriangle(height, base);
  expected = 50;
  assert(abs(answer-expected) < MAX_ERROR);}
  // FIXME5: Write 4th test case//fixed
 