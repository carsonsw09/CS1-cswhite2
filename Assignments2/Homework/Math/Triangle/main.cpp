//My name is Carson White and I go to Colorado Mwsa University
//This program asks the user to enter the length of 3 sides of the triangle and the runs an area function and a perimiter equation to find and return the perimeter and area

#include <iostream> 
#include <cmath>
using namespace std; 
int main() 
{ 
    float b, c, d, area, s, p; 
    cout << "Enter the length of side 1 of the triangle: "; 
    cin >> b; 
    cout << "Enter the length of side 2 of the triangle: "; 
    cin >> c; 

cout << "Enter the length of side 3 of the triangle: "; 
cin >> d;
    s = (b+c+d)/2; 

area = sqrt(s*(s-b)*(s-c)*(s-d)); 
    cout << "\nArea = " << area; 
    cout << endl; 

p = s*2; 

cout << "\nThe area of the triangle is = " << area; 

cout << endl; 

cout << "\nThe perimeter of the triangle is = " << p; 

cout << endl; 

 
    return 0; 
} 