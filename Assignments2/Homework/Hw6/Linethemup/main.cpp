//My name is Carson White and I am a computer science major at Colorado Mesa University

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string playerNames();//this creates the array to store the player names according to the number of players

void unitTest(){
    string test1[] = {"Carson", "Doug", "Greg", "Max", "Tom"};//this checks for increasing alphabetical order
    bool increasing = true;
    for (int i = 0; i < 4; i++) {
        if (test1[i] > test1[i+1]) {
            increasing = false;
        }
        if (test1[i] < test1[i+1]) {
            increasing = true;
        }
    }
    assert(increasing == true);

    string test2[] = {"Tom", "Max", "Greg", "Doug", "Carson"};//this checks for decreasing alphabetical order
    increasing = true, decreasing = true;
    for (int i = 0; i < 4; i++) {
        if (test2[i] > test2[i+1]) {
            increasing = false;
        }
        if (test2[i] < test2[i+1]) {
            decreasing = false;
        }
    }
    assert(decreasing);

    string test3[] = {"Carson", "Greg", "Doug", "Tom", "Max"};//this checks if it is neither decreasing or increasing
    increasing = true, decreasing = true;
    for (int i = 0; i < 4; i++) {
        if (test3[i] > test3[i+1]) {
            increasing = false;
        }
        if (test3[i] < test3[i+1]) {
            decreasing = false;
        }
    }
    assert(!increasing && !decreasing);

    string test4[] = {"Carson", "Doug", "Greg", "Max", "Winter"};//this checks for increasing alphabetical order again
     increasing = true, decreasing = true;
    for (int i = 0; i < 4; i++) {
        if (test1[i] > test1[i+1]) {
            increasing = false;
        }
        if (test1[i] < test1[i+1]) {
            decreasing = false;
        }
    }
    assert(increasing);

   

    cout << "All test cases passed." << endl;

    
}




int main() {
    int numPlayers;
    cout << "Enter the number of players on the team: ";
    cin >> numPlayers;

    string playerNames[numPlayers];

    for (int i = 0; i < numPlayers; i++) {
        cout << "Enter the name of player " << i + 1 << ": ";//this asks the user to enter the name of the player according to their value
        cin >> playerNames[i];
    }

    bool increasing = true, decreasing = true;
    //this checks if the names are in increasing alphabetical order or decreasing alphabetical order
    for (int i = 0; i < numPlayers - 1; i++) {
        if (playerNames[i] > playerNames[i+1]) {
            increasing = false;
        }
        if (playerNames[i] < playerNames[i+1]) {
            decreasing = false;
        }
    }

    if (increasing) {
        cout << "The player names are in increasing alphabetical order." << endl;
    } else if (decreasing) {
        cout << "The player names are in decreasing alphabetical order." << endl;
    } else {
        cout << "The player names are not in alphabetical order." << endl;
    }
    unitTest();

    return 0;
}
