/*
Map Lab
Kattis - Morse Code Palindromes
Updatd By: Carson White
Date: 5/1/23
Solution to Morse Code Palindromes Problem: https://open.kattis.com/problems/morsecodepalindromes
Algorithm steps:
1. Creae a map of char to morse code
2. Read in a string
3. Convert the string to morse code
   i. for each char in string, find its morse code in map
   ii. append morse code to a string if char key is found
4. Check if morse code is a palindrome
  i. compare first and last char
  ii. if they are the same, compare second and second last char
  iii. if they are the same, compare third and third last char
  iv. repeat until all chars are compared until mid index or a mismatch is found
5. Print 1 if morse code is a palindrome, 0 otherwise
*/

#include <iostream>
#include <cmath>
#include <cassert>
#include <map>
#include <string>
#include <cstring>

using namespace std;

// Algorithm step 1
map<char, string> morseCode = {
	{'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."},
	{'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
	{'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
	{'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
	{'Y', "-.--"}, {'Z', "--.."}, {'0', "-----"}, {'1', ".----"}, {'2', "..---"},
	{'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
	{'8', "---.."}, {'9', "----."}, 
};

// function prototypes
string convertToMorse(const string&);
bool isPalindrome(const string&);
void testConvertToMorse();
void testIsPalindrome();
void solve();
void unittest();

int main(int argc, char* argv[]) {
	if (argc == 2 and string(argv[1]) == "test")
		unittest();
	else
		solve();
}

// solving the problem for kattis
void solve() {
	string phrase, morse;
	// string is a phrase: with space, puncuation, lower and uppercase letters
	// FIXME1 - step 2//fixed
    cin >> phrase;
	// read english phrase into phrase variable
	// FIXME2 - step 3 //fixed
	// convert phrase to morse code
    convertToMorse(phrase);
	// FIXME3 - step 4//fixed
	// check if morse code is a palindrome calling isPalindrome function
	// FIXME4 - step 5/ /fixed
	// print 1 if it is a palindrome, 0 otherwise
    if(isPalindrome(morse) == true){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}

// function definitions
string convertToMorse(const string& phrase) {
	string morse = "";
	// convert phrase to morse code
	// for each char in phrase, convert char to uppercase, find its morse code in morseCode map
	// append morse code to a string if char key is found
    
	for (char c : phrase) {
		c = char(toupper(c));
		// FIXME5 - find morse code for char c in morseCode map and append it to morse string// fixed
        morse += c;
	}
	return morse;
}


bool isPalindrome(const string& morse) {
	// FIXME6 - check if morse code is a palindrome//maybe fixed
	// return true if it is a palindrome, false otherwise
	// Algorithm step: 
		// compare first and last char
		// if they are the same, compare second and second last char
		// if they are the same, compare third and third last char
		// repeat until all chars are compared until mid index or a mismatch is found
		string string1, string2;
		string2 = morse;
		int n = string2.length();
 
    
    for (int i = 0; i < n / 2; i++)
        swap(string2[i], string2[n - i - 1]);
		
		string1 = morse;
        if(string1 == string2){
			return true;

		}
		else
			return false;
		// NOTE: empty morse code is not a palindrome!
	
}

void testConvertToMorse() {
	assert(convertToMorse("A") == ".-");
	assert(convertToMorse("9") == "----.");
	assert(convertToMorse("Aa") == ".-.-");
	cerr << convertToMorse("AaBb") << endl;
	assert(convertToMorse("AaBb") == ".-.--...-...");
	assert(convertToMorse("Race car!") == ".-..--.-..-.-..-.-.");
	assert(convertToMorse("1881") == ".-------..---...----");
    assert(convertToMorse("Boston") == "-...---...-----.");
    assert(convertToMorse("100") == ".--------------");
    assert(convertToMorse("Messi") == "--.........");
	// FIXME7 - add 3 more test cases//fixed
}

void testIsPalindrome() {
	string morse = convertToMorse("A");
	assert(isPalindrome(morse) == true);
	morse = convertToMorse("AaBb");
	assert(isPalindrome(morse) == false);
	morse = convertToMorse("Race car!");
	assert(isPalindrome(morse) == true);
	morse = convertToMorse("1881");
	assert(isPalindrome(morse) == true);
    morse = convertToMorse("Boston");
    assert(isPalindrome(morse) == true);
    morse = convertToMorse("100");
    assert(isPalindrome(morse) == true);
    morse = convertToMorse("Messi");
    assert(isPalindrome(morse) == true);
	// FIXME8 - add 3 more test cases//fixed
}

// unit testing all functions
void unittest() {
  // FIXME9 - call all unit test functions//fixed
 void testConvertToMorse();
 void testIsPalindrome();

  cerr << "All unittests passed!\n";
}
