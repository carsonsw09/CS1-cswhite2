//My name is Carson White, I am a computer science major at Colorado Mesa University
//The first step of this program is to ask the user the name and then to greet them
//2) Then the randonnumber function is defined, as well as the readnumber function and checkguess function
//3) The test function for the check guess is then defined
//4) the game function is then defined that uses all three functions listed above in it
//5) The main runs the game function that encompasses the functions running the program
//6) The user is in a loop until they quit and once they want to the program shuts down and is then cleared

#include <iostream>
#include <iomanip>
#include <string>
#include <cassert>
#include <cctype>

using namespace std;






int randomnumber(){
    int max = 20;

    srand(time(NULL));

    int randonum = rand() % max;

    return randonum;
}
int readNumber() {
    int guess = 1000;

    
    cout << "Guess a number between 1 and 20: ";
    cin >> guess;

        
        
    while (guess < 1 || guess > 20) {
        cout << "Invalid guess. Please enter a number between 1 and 20." << endl;
        cin >> guess;

    }
    return guess;
    
    }


int checkGuess(int guess, int answer) {
    if (guess == answer) {
        return 0;
    } else if (guess < answer) {
        return -1;
    } else {
        return 2;
    }
}

void guesstest(){

assert(checkGuess(10, 10) == 0);
assert(checkGuess(10, 5) == 2);
assert(checkGuess(1, 2) == -1);
}

void game() {
    int randonum;
    int guess = 0;
    int attempts = 0;
    int result = 0;
    
        
        randonum = randomnumber();
        


        while (attempts < 6){
            attempts++;
            guess = readNumber();
            result = checkGuess(guess, randonum);
        if (result == 0) {
            cout << "Congrats, you guessed the number in " << attempts << " attempts." << endl;
            break;
        }
        else if (result == -1 && attempts != 6) {
            cout << "Your guess is too low. Try again." << endl;
        } 
        else if(result == 2 && attempts != 6){
            cout << "Your guess is too high. Try again." << endl;
        }
        
        }
        if (attempts == 6 && result != 0){
            cout << "You ran out of attempts and suck at guessing numbers" << endl;
            cout << "The random number was " << randonum << endl;

        }


}
void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
        #endif
    }

int main() {
    string name;
    cout << "What is your name ";
    cin >> name;
    cout << "It's great to meet you " << name << endl;
    char playAgain = 'y';

     while (tolower(playAgain == 'y')){
        game();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        clearScreen();

     }

    return 0;
}
