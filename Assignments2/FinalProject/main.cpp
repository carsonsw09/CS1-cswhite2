

// Programmer: Carson White
// Program: Hangman Game
// Date: 5/14/23

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

vector<string> FileRead(const string& fileName) {//this is a decleration of the File Read vector with the filename input
vector<string> words;
ifstream file(fileName);


if (!file.is_open()) {
    cout << "Error opening file." << endl;
    return words;
}

string word;
while (getline(file, word)) {
    words.push_back(word);
}

file.close();
return words;
}

string getRandomWord(const vector<string>& words) {//this generates a random word
int index = rand() % words.size();
return words[index];
}

void displayWord(const string& word, const vector<bool>& guessed) {//this displays the randomly generated word
for (int i = 0; i < word.length(); ++i) {
if (guessed[i]) {
cout << word[i] << " ";
} else {
cout << "_ ";
}
}
cout << endl;
}

bool isWordGuessed(const vector<bool>& guessed) { //this checks if the word is guessed
for (bool val : guessed) {
if (!val) {
return false;
}
}
return true;
}

void updateGuessedLetters(const string& word, vector<bool>& guessed, char guess) {// this updates the guessed letter
for (int i = 0; i < word.length(); ++i) {
if (word[i] == guess) {
guessed[i] = true;
}
}
}

void displayHangman(int incorrectGuesses) { //this determines what happens if the guesses are incorrect using if statements
cout << " " << endl;
cout << " | |" << endl;
cout << " | ";
if (incorrectGuesses > 0) cout << "O";
cout << endl;
cout << " | ";
if (incorrectGuesses > 2) cout << "/";
if (incorrectGuesses > 1) cout << "|";
if (incorrectGuesses > 3) cout << "\\";
cout << endl;
cout << " | ";
if (incorrectGuesses > 4) cout << "/";
cout << endl;
cout << " | ";
if (incorrectGuesses > 5) cout << "/";
if (incorrectGuesses > 6) cout << " \\";
cout << endl;
cout << " |" << endl;
cout << "| |" << endl;
cout << "|______|" << endl;
}

void playHangman(const string& word) { //this runs the game function with 7 tries
const int maxTries = 7;
int tries = 0;
vector<bool> guessed(word.length(), false);
vector<char> guessedLetters;

while (tries < maxTries) {
    cout << "Guessed Letters: ";
    for (char letter : guessedLetters) {
        cout << letter << " ";
    }
    cout << endl;
    
    displayHangman(tries);
    displayWord(word, guessed);
    
    char guess;
    cout << "Enter a letter: ";
    cin >> guess;
    
    if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
        cout << "You already guessed that letter." << endl;
        continue;
    }
    
    guessedLetters.push_back(guess);
    
    if (word.find(guess) != string::npos) {
        updateGuessedLetters(word, guessed, guess);
        if (isWordGuessed(guessed)) {
            cout << "Congratulations! You guessed the word: " << word << endl;//this is used if the word is guessed correctly
            return;
        }
    } else {
        ++tries;
        cout << "Incorrect guess. Tries left: " << maxTries - tries << endl;//this is used if the guess is incorrect
    }
}

displayHangman(tries);
cout << "You ran out of tries. The word was: " << word << endl;//this is used if the player runs out of tries
}

int main() {
srand(time(0)); // this initializes the random seed


vector<string> words = FileRead("words.txt");
if (words.empty()) {
    return 1;
}

char playAgain;//this function asks the user if they want to play again
do {
    string word = getRandomWord(words);
    playHangman(word);
    
    cout << "Do you want to play again? (Y/N): ";
    cin >> playAgain;
} while (playAgain == 'Y' || playAgain == 'y');

return 0;
}
