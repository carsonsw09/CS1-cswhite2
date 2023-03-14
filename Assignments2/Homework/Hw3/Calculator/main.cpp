//My name is Carson White and I am a sophomore computer science major at Colorado Mesa University
//This is a program that runs a calculator like prgoram 

//not done yet with this program needs more work on it
#include <iostream>
#include <cstdio>
#include <cassert> 
#include <string>
#include <cmath>
using namespace std;
//use template function
template<class TP>
TP sumofnumbers(TP num1, TP num2);//this declares the function to find the sum of the numbers

template<class TP>
TP productofnumbers(TP num1, TP num2);// this declares the function to find the product of the numbers

template<class TP>
TP quotientofnumbers(TP num1,  TP num2);//this declares the function to find the quotient of the numbers

template<class TP>
TP differenceofnumbers(TP num1,  TP num2);// this declares the function to find the difference of the numbers
template<class TP>
TP remainderofnumbers(TP num1, TP  num2);//this declares the function to find the remainders of the numbers
template<class TP>
TP powerofnumbers(TP num1, TP  num2);//this declares the function to find the value of the first number to the power of the second number

template<class TP>
TP sqrtofnumbers(TP num1, TP num2);//this declares the function to find the value of the first number square rooted to the power of the second number
//fix these test functions into one
voidTestarea(){///this is a call to the unit test function using assert
assert(sumofnumbers(20, 10) == 30);
assert(sumofnumbers(50, 5) == 55);

assert(productofnumbers(20, 10) == 200);
assert(productofnumbers(50, 5) == 250);

assert(quotientofnumbers(20, 10) == 2);
assert(quotientofnumbers(50, 5) == 10);

assert(differenceofnumbers(20, 10) == 10);
assert(differenceofnumbers(50, 5) == 45);

assert(remainderofnumbers(20, 10) == .2);
assert(remainderofnumbers(50, 5) == .5);

assert(powerofnumbers(20, 10) == 10240000000000);
assert(powerofnumbers(50, 5) == 312500000);

assert(sqrtofnumbers(20, 10) == 4.47);
assert(sqrtofnumbers(50, 5) == 7.071);






}




int main(){//this calls up the main function where the functions will be executed and the results will be printed

float num1, num2;


cout << "Please enter two numbers" << endl;
    cin >> num1 >> num2;

result = sumofnumbers <TP> ( num1, num2);
printf("The sum of the two numbers is (%d) = %f\n", num1, num2, result);
result = productofnumbers <TP> (num1, num2);
printf("The product of the two numbers is (%f) = %f\n",num1, num2, result);
result = quotientofnumbers <TP> ( num1,  num2);
printf("The quotient of the two numbers is(%f) = %f\n",num1, num2, result);
result = differenceofnumbers <TP> ( num1, num2);
printf("The differnce of the two numbers is(%f) = %f\n", num1, num2, result);
result = remainderofnumbers <TP>( num1, num2);
printf("The remainder of the two numbers is(%f) = %f\n", num1, num2, result);
result = powerofnumbers <TP>( num1,  num2);
printf("The result of the number1 to the power of number2 is (%f) = %f\n", num1, num2, result);
result = sqrtofnumbers <TP> ( num1,);
printf("The result of the number1 being squarerooted is (%f) = %f\n",num1, result);


return 0;



}//this is where the equations for the functions are used and the values are returned
template<class TP>
TP sumofnumbers(TP num1, TP num2)
{
TP sum = 0;
    sum = (num1+num2);
return sum;
}
TP productofnumbers(TP num1, TP num2){
TP product = 0;
prodcut = (num1*num2);
 return product;
}
TP quotientofnumbers(TP num1, TP num2){
TP quotient = 0;
    quotient = (num1/num2);
    return quotient;}
TP differenceofnumbers(TP num1, TP num2){
TP difference = 0;
    difference = (num1-num2);
    return difference}
TP remainderofnumbers(TP num1, TP num2){
TP remainder = 0;
    remainder = fmod(num1, num2);
    return remainder;}
 
TP powerofnumbers(TP num1, TP num2){
TP power = 0;
    power = pow(num1, num2);
    return power;}

TP sqrtofnumbers(TP num1, ){
TP sqrt = 0;
    sqrt = sqrt(num1);
    return sqrt;}

