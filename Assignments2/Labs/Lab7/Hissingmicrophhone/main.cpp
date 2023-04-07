/*
Kattis - Hissing Microphone Problem
Updated By: Carson White
Date: 4/6/23
Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read a string
2. Search for "ss" substring in the string
    i. if found, print "hiss"
    ii. otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
}

string answer(const string &line) {
    // FIXME3 - implement algorithm step 2; return "hiss" or "no hiss"//fixed
    string str;

    cin >> str;

    for (int i = 1; i < str.length(); i++) {
        if (str.at(i - 1) == str.at(i) && str.at(i) == 's') {
            cout << "hiss";
            return 0;
        }
    }
    cout << "no hiss";

    return 0;
  
}

// unit testing answer()
void testAnswer() {
    // FIXME4 - write at least two test cases to test answer()//fixed
    string ans = answer("Hiss");
    assert(ans == "hiss");

    ans = answer("Green");
    assert(ans == "hiss");

    ans = answer("gum");
    assert(ans == "no hiss");

    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve() {
    string line;
    // Note: string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5 - read string into line//fixed
    getline(cin, line);
    cout << answer(line) << endl;
}
