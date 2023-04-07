//My name is Carson White and I am a computer science major at Colorado Mesa University

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string simplerword(string word) {//this is the function where the word will be simplified if there are consecutive letters
    string simplerword = "";
    int n = word.length();
    
    simplerword += word[0];//this initializes the simplerword function to the word variable
    for (int i = 1; i < n; i++) {
        if (word[i] != word[i-1]) {//this checks if the word has consecutive letters and gets rid of them
            simplerword += word[i];
        }
    }
    return simplerword;
}

void unitTest(){//this is the unit test function with 4 different test cases
    string ans = simplerword("Moose");
    assert(ans == "Mose");

    ans = simplerword("Boston");
    assert(ans == "Boston");

    ans = simplerword("Goon");
    assert(ans == "Gon");

    ans = simplerword("Cherry");
    assert(ans == "Chery");

    cerr << "All test cases passed" << endl;




}

int main(){
    string word;
    cout << "Please enter a word ";//the word is asked here and returned to the word variable
    cin >> word;

    string simpleword = simplerword(word); //this sets simpleword equal to the answer of the function simplerword
    cout << "The simplified word is " << simpleword << endl;

    unitTest();//this calls the unit test into the main function

    return 0;





}