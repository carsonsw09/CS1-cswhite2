//Loops Lab
    //Updated By: Carson White
    //CSCI 111
    //Date: 3/14/23
    //Program prints geometric shapes of given height with * using loops


#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


void printTriangle(int height) {
    //Function takes height as an argument to print the triangle
    //of that height with *
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}


void printFlippedTriangle(int height) {

    int row = 1;

    while (height >= row) {
        // column
        for(int col = 1; col <=height; col++)
            cout << "* ";
        height --;
        cout << endl;
    }

 
}
    /* 
    Implement the function that takes height as an argument
    and prints a triangle with * of given height.
    Triangle of height 5, e.g., should look like the following.
    * * * * *
    * * * *
    * * *
    * *
    *
    
    */
    // FIXME3 ...//fixed



/*  
FIXME4// fixed
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.
*  *  *  *  *  
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*/

void printSquare(int height) {
    for (int i = 0; i < height; i++) {
        for (int col = 0; col < height; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}
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

int main(int argc, char* argv[]) {
        
    char userinpunt = 'b';
    bool keeprunning = true;
        while(keeprunning){
            









        


    // FIXME5 add a loop to make the program to continue to run until the user wants to quit//fixed

    // FIXME6 call clearScreen function to clear the screen for each round of the loop//fixed
    int height;
    cout << "Program prints geometric shapes of given height with *\n";
    cout << "Please enter the height of the shape: ";
    cin >> height;
    // call printTriangle function passing user entered height
    printTriangle(height);

    // FIXME7
    printFlippedTriangle(height);
    // Call printFlippedTriangle passing proper argument
    // Manually test the function

    // FIXME6
    // Call the function defined in FIXME4 passing proper argument
    // Manually test the function
    printSquare(height);
    cout << "If you want to keep playing enter y, if you want to quit enter n ";
        cin >> userinpunt;
    if(userinpunt == 'n')
    keeprunning = false;
    clearScreen();
    

        }

    // FIXME9//fixed
    // prompt user to enter y/n to continue anything else to quit
  
    
}

    // FIXME10//fixed
    // Use conditional statements to break the loop or continue the loop

   