
//Functions L
//Updated By: Carson White
//CSCI 111
//Date: 3/5/23
//Program prompts the user to enter two points in the form (x1, y1) and (x2, y2) and finds the distance between the two points using a function.
//Algorithm steps:
   //1. Define a function called findDistance(…) that takes four parameters x1, y1 and x2, y2 as two points
       //a. finds the distance between them using the equation: √((x2-x1)^2 + (y2-y1)^2)
      //b. returns the calculated distance value
   //2. Prompt user to enter two points in (x, y) format
   //3. Store them into 4 individual variables
   //4. Call function getDistance by passing 4 entered numbers as arguments
   //5. Display results with proper description. Format output numbers to 2 decimal points.
   //6. Test and validate that program output is correct for a given set of input points.
   //7. BONUS - (10 points) Using a loop repeat step 2-6 until the user wants to quit.
//

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

const float epsilon = 1e-5; // 0.00001 accuracy upto 5 decimal points; error of margin

// function prototypes

// Function that calculates the distance between two points
// x1, y1 and x2, y2 and returns the calculated value
double findDistance(int x1, int y1, int x2, int y2){
double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
return distance;

}

// test function that runs automated testing
void unitTest();


// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main()
{
    int x1, y1, x2, y2; // variables to store two points (x1, y1) and (x2, y2)
    char ch;

    //FIXME-bonus - 10 bonus points - add loop until user wants to quit
    // the loop will execute the following block of code
    {
        clearScreen();
        cout << "Program calculates distance between 2 points on a 2D coordinate." << endl;
        cout << "Enter a point in the form (x, y): ";
        // parse the input stream
        cin >> ch >> x1 >> ch >> y1 >> ch; // value stored in ch is ignored
        printf("(x1, y1) = (%d, %d)\n", x1, y1);

        cout << "Enter a second point in the form (x, y): ";
        cin >> ch >> x2 >> ch >> y2 >> ch;
        printf("(x2, y2) = (%d, %d)\n", x2, y2);
        //FIXME3 - Read/parse the second point and store data into variables x2 and y2//fixed

        
        //FIXME4 - Call unitTest function//fixed
        
       
        double distance = findDistance(x1, y1, x2, y2);
        printf("The distance between (%d, %d) and (%d, %d) is %f\n", x1, y1, x2, y2, distance );

       unitTest();

        //FIXME5 - call findDistance function passing proper arguments//fixed?
        //FIXME6 – Using printf function display the returned distance with proper description//fixed
    }

    cin.ignore(1000, '\n');
    cout << "Enter to quit the program: ";
    cin.get();
    cout << "Good bye..." << endl;
    return 0;
}

double findDistance2(int x1, int y1, int x2, int y2)
{
    // FIXME7 - Find the distance between (x1, y1) and (x2, y2)//fixed
    // following the algorithm in step 1
    // return the calculated distance
    
   
double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
return distance;
    
}

// test function that test findDistance function with 3 test cases
void unitTest()
{
    float result =  findDistance(4, 3, 5, 1);
    float expected = 2.236068f;
    assert( fabs(result - expected) <= epsilon); //accept the result if it's less than the error of margin

     result =  findDistance(1, 1, 2, 2);
     expected = 1.4142f;
    assert( fabs(result - expected) <= epsilon);

     result =  findDistance(3, 3, 0, 0);
     expected = 4.24264f;
    assert( fabs(result - expected) <= epsilon);



    // FIXME8 - add at least two more test cases//fixed
    cout << "all test cases passed..." << endl;
}
