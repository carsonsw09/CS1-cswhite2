/*
    StdIO Lab
    Printing ASCII Art Using Standard Input/Output
    
    Updated By: Carson White
    Date: 4/17/23
    
    This program produces an ASCII art on the console using C++ std IO.
    Algorithm steps: 
    1. Declare variables to store data/values
    3. Write and use function to center text within a give column width
    3. Write a series of input/output statements to get data/values and print them on the console.
*/

#include <iostream> // C++ library for std IO
#include <iomanip> // C++ library for formatting IO
#include <string> // C++ library for string data
 
using namespace std; //resolve cout, cin, endl, etc. identifiers for C++ stdio

// function to center string
// given width of the column and the string, function returns centered string within the column
// https://stackoverflow.com/questions/14861018/center-text-in-fixed-width-field-with-stream-manipulators-in-c
string centerText(int width, const string& str) {
    int len = str.length();
    if(width < len) { 
        return str; 
    }
    int diff = width - len;
    int pad1 = diff/2;
    int pad2 = diff - pad1;
    return string(pad1, ' ') + str + string(pad2, ' ');
}
 
//main entry point of the program
int main()
{
    const int middleWidth = 60;
    const int tomWidth = 20;
    const int jerryWidth = 20;
    cout << centerText(100, "STD IO Lab using C and C++ libraries") << endl;
    // create a string with 75 = signs; center the string and print it out
    cout << centerText(100, string(50, '=')) << endl << endl; 
    string labTitle; // declare a variable to store your name
    // prompt to enter your name from standard input
    cout << "Enter Lab Title: ";
    // store the entered data/title into labTitle variable
    getline(cin, labTitle);
   
    //FIXME1: declare a variable to store programmer's name//fixed
    string username;
    //FIXME2: prompt to enter programer's name and store the entered data into the declared variable//fixed
    cout << "Please enter the programmer's name " << endl;
    cin >> username;

    string coursename;
    cout << "Please enter the course name " << endl;
    cin >> coursename;

    //FIXME3: prompt user to enter course name (e.g., CSCI 111) and store the data into a declared variable//fixed
    string semesterinfo;
    cout << "Please enter semester info " << endl;
    cin >> semesterinfo;
    //FIXME4: prompt user to enter semester info (e.g., Fall 2022) and store the data into a declared variable//fixed

    const string tom1 = "|\\_/|";
    const string jerry1 = "(\\_/)";
    const string tom2 = "/  @  @ \\";
    const string jerry2 = "(='.'=)";
    const string tom3 = "(  >  0  <  )";
    const string jerry3 = "( / )( / )";
    const string tom4 = ">>x<< ";
    const string jerry4 = "  ";
    const string tom5 =  "/ 0 \\";
    const string jerry5 = "\n\n";
    string asterics = string(middleWidth, '*'); // create a string with 50 asterics
    
    // create the first line of the ASCII art
    string tomLine1 = centerText(tomWidth, tom1);
    string infoLine1 = centerText(middleWidth-2, asterics);
    string jerryLine1 = centerText(jerryWidth, jerry1);

    // Print the 1st line
    cout << tomLine1 << infoLine1 << jerryLine1 << endl;

    // create the 2nd line of the ASCII art
    string tomLine2 = centerText(tomWidth, tom2);
    string infoLine2 = centerText(middleWidth-2, labTitle);
    string jerryLine2 = centerText(jerryWidth, jerry2);

    // Print the 2nd line
    cout << tomLine2 << '*' << infoLine2 <<  '*' << jerryLine2 << endl;

    //FIXME5: Create and print the 3rd line of the ASCII art//fixed
    string tomLine3 = centerText(tomWidth, tom3);
    string infoLine3 = centerText(middleWidth-2, asterics);
    string jerryLine3 = centerText(jerryWidth, jerry3);

    cout << tomLine3 << '*' << infoLine3 << '*' << jerryLine3 << endl;
    //FIXME6: Create and print the 4th line of the ASCII art//fixed
    string tomLine4 = centerText(tomWidth, tom4);
    string infoLine4 = centerText(middleWidth-2, asterics);
    string jerryLine4 = centerText(jerryWidth, jerry4);

    cout << tomLine4 << '*' << infoLine4 << '*' << jerryLine4 << endl;
    //FIXME7: Create and print the 5th line of the ASCII art//fixed
    string tomLine5 = centerText(tomWidth, tom5);
    string infoLine5 = centerText(middleWidth-2, asterics);
    string jerryLine5 = centerText(jerryWidth, jerry5);

    cout << tomLine5 << '*' << infoLine5 << '*' << jerryLine5 << endl;
    //Note: You can add more lines or print more ASCII arts of your choice ... if you'd like to...

    cout << "\nGood bye... hit enter to exit the program.\n";
    //FIXME8: make the console wait for user input//fixed
    cin.ignore();

    return 0; //exit program by returning 0 status to the system
}