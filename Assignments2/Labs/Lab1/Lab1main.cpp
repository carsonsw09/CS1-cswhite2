/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: <Carson White> #FIXME1
    Date: 2/9/23 #FIXME2
    
    This program produces an ASCII art on the console.
    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    string name;
    cout << "Enter your name: " << endl;
    getline( cin, name);
    cout << "Nice meeting you, " << name << endl;



    
     
    //FIXED: declare a variable to store name
    //FIXED: prompt user to enter their name and store the value into name variable using getline function
    
    //FIXED: greet the name using the variable as the following output
    //must output: Nice meeting you, <name>!

    cout<< "Nice meeting you, ";

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "    |\\_/|     **********************            (\\_/)\n";
    string line2 = " /  @  @  \\    *     ASCII Lab            *    (='.'=)\n";
    string line3 = "(  >  0  <  )  *    By: <Carson White>    *  ( / )( / )\n";
    string line4 = "    >>x<<      *     CSCI 111             *   \n" ;
    string line5 = "    / 0 \\     ***********************       \n\n";

    


    cout << line1;
    cout << line2;
    cout << line3;
    cout << line4;
    cout << line5;


    //FIXED6: use variable to print the second line line of the graphic//
    //FIXED7: print the third line of the graphics
    //FIXME8: use variable to print the fourth line FIXED
    //FIXME9: use variable to print the fifth line FIXED
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    //FIXME10: make the console wait for user input

    return 0; //exit program by returning 0 status to the system
}