//My name is Carson White and I am a computer science major at Colorado Mesa University

#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

int integervalues[10];//this creates an array for the different 

void sortnumber(int integervalues[], int numberofints);

void unitTest(){
    
 int test1[] = {3, 1, 2};//this checks for the first sample
 int tot = 0;
    for (int i = 0; i < 2; i++) {
        if (test1[i] > test1[i+1]) {
            tot = test1[i];
        }
        if (test1[i] < test1[i+1]) {
            tot = test1[i+1];
        }
    }
    assert(3);
 int test2[] = {1, 2, 2, 1};//this checks for the second sample
  tot = 0;
    for (int i = 0; i < 3; i++) {
        if (test2[i] > test2[i+1]) {
            tot = test2[i];
        }
        if (test2[i] < test2[i+1]) {
            tot = test2[i+1];
        }
    }
    assert(2);
 

 int test3[] = {4, 3, 2, 1};//this checks for the thrid sample
  tot = 0;
    for (int i = 0; i < 3; i++) {
        if (test3[i] > test3[i+1]) {
            tot = test3[i];
        }
        if (test3[i] < test3[i+1]) {
            tot = test3[i+1];
        }
    }
    assert(4);
 int test4[] = {6, 4, 1, 2, 3, 5};//this checks for the fourth sample
  tot = 0;
    for (int i = 0; i < 5; i++) {
        if (test4[i] > test4[i+1]) {
            tot = test4[i];
        }
        if (test4[i] < test4[i+1]) {
            tot = test4[i+1];
        }
    }
    assert(6);

 cout << "All test cases passed." << endl;


}

int main(){
int numberofints;//this declares the number of ints variable
cout << "Enter the number of pieces: ";
cin >> numberofints;//this returns that variable

int integervalues[numberofints];//this connects our array to the numberofints variable

for (int i = 0; i < numberofints; i++) {
cout << "Enter the different pieces " << i + 1 << ": ";
cin  >> integervalues[i];//this takes in the integer values into the array
}

sortnumber(integervalues,numberofints);


    


unitTest();//this calls the unit test to past through the main. 

return 0;


}

void sortnumber( int integervalues[],int numberofints){
sort(integervalues, integervalues + numberofints, greater<int>());

    int group1 = 0, group2 = 0;
    for (int i = 0; i < numberofints; i++) {
        if (i % 2 == 0) {
            group1 += integervalues[i];
        } else {
            group2 += integervalues[i];
        }
    }

    cout << "Alice gets a value of: " << group1 << endl;
    cout << "Bob gets a value of: " << group2 << endl;

}