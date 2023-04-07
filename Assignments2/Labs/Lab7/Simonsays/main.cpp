/*
Kattis - Simon Says
Updated By: Carson White
Date: 4/6/23
Problem Statement: https://open.kattis.com/problems/simonsays 
Algorithm steps:
1. Read N
2. Loop N times:
  i. Read a line
  ii. If the line starts with "Simon says",
    print the rest of the string. Note: print the leading space after says as well!
  iii. Otherwise, skip the line
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
  if (argc == 2 and string(argv[1]) == "test") {
    // FIXME1: call testAnswer function//fixed
    testAnswer();
  }
  else
    solve();
}

string answer(const string &line) {
  // FIXME2: If the line starts with "Simon says", return rest of the line after says
  // including the space after says, otherwise return empty string ""
  // Hint: use find method on line object
  
    string simonline = "Simon says";

    if (line.find(simonline) == 0) {
        
        string rest = line.substr(line.find("says ") + 5);
        cout << "Rest of the line: " << rest << endl;
    } else {
        cout << "Empty string" << endl;
    }

    return "";

  
}

// unit testing answer()
void testAnswer() {
  string ans = answer("Simon says laugh!");
  // let's double check what the returned answer is
  cout << "ans = " << ans << endl;
  assert(ans == " laugh!"); 
  assert(answer("Write more programs.") == "");

   ans = answer("Simon says clap");
  cout << "ans = " << ans <<endl;
  assert(ans == " clap!");
  assert(answer("Write more programs.") == "");

   ans = answer("Simon says do a jumping jack");
  cout << "ans = " << ans << endl;
  assert(ans == "do a jumping jack");
  assert(answer("Write more programs.") == "");
  // FIXME3: write at least two test cases to test answer()//fixed
  cout << "All test cases passed!\n";
}

// solving the problem for kattis
void solve() {
  string ans="", line="";
  int N;
  cin >> N;
  //FIXME4 : read and discard \n left behind//fixed
  cin.ignore(1000, '\n');
  while (N--) {
    // Note: i. string consists of phrase with spaces
    // ii. don't print an empty line if the line doesn't start with "Simon says"
    // FIXME5: read the whole line into line //fixed
    getline(cin, line);
    // FIXME6: call answer function and store the returned value into ans//fixed
    ans = answer(line);
    if (ans == "") continue;
    // FIXME7: print ans//fixed
    cout << ans << endl;
  }
}
