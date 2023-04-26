//My name is Carson White and I am a computer science major at Colorado Mesa University
//This is a program that runs a hangman game

#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;

    cout << "Hey there, what's your name " << endl;
    cin >> name;

    cout << "Hey " << name << endl;

    cout << "he hangman game is under construction, maybe you’ll get to play it in a few weeks… This is what various stages of the hangman game will look like…";

    string line1 = "     |---------------\n";
    string line2 = "     |/        |     \n";
    string line3 = "     |               \n";
    string line4 = "     |               \n";
    string line5 = "     |               \n";
    string line6 = "     |               \n";
    string line7 = "     |               \n";
    string line8 = "---------------\n";

    string line10 ="     |        / \\  \n";
    string line11 ="     |        \\ /  \n";
    string line12 ="     |         |    \n";
    string line13 ="     |         |    \n";
    string line14 ="     |        /     \n";
    string line15 ="     |        / \\   \n";
    string line16 ="     |      ---|    \n";
    string line17 ="     |      ---|--- \n";

    //first stage
    cout << line1;
    cout << line2;
    cout << line3;
    cout << line4;
    cout << line5;
    cout << line6;
    cout << line7;
    cout << line8;
    
    //second stage

    cout << line1;
    cout << line2;
    cout << line10;
    cout << line11;
    cout << line5;
    cout << line6;
    cout << line7;
    cout << line8;
    
    //third stage

    cout << line1;
    cout << line2;
    cout << line10;
    cout << line11;
    cout << line12;
    cout << line13;
    cout << line7;
    cout << line8;
    
    //fourth stage
    cout << line1;
    cout << line2;
    cout << line10;
    cout << line11;
    cout << line12;
    cout << line13;
    cout << line14;
    cout << line8;
    

    //fifth stage
    cout << line1;
    cout << line2;
    cout << line10;
    cout << line11;
    cout << line12;
    cout << line13;
    cout << line15;
    cout << line8;
    

    //sixth stage
    cout << line1;
    cout << line2;
    cout << line10;
    cout << line11;
    cout << line16;
    cout << line13;
    cout << line15;
    cout << line8;
    

    //seventh stage
    cout << line1;
    cout << line2;
    cout << line10;
    cout << line11;
    cout << line17;
    cout << line13;
    cout << line15;
    cout << line8;
    
    
    








}