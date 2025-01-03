#include <iostream>
#include <cmath>
#include <cassert>
#include <map>
#include <string>
#include <cstring>

using namespace std;

map<char, string> alpha_map{//this is a map of the translation of the characters needed
            {'A', "@"},
            {'B', "8"},
            {'C', "("},
            {'D', "|)"},
            {'E', "3"},
            {'F', "#"},
            {'G', "6"},
            {'H', "[-]"},
            {'I', "|"},
            {'J', "_|"},
            {'K', "|<"},
            {'L', "1"},
            {'M', "[]\\/[]"},
            {'N', "[]\\[]"},
            {'O', "0"},
            {'P', "|D"},
            {'Q', "(,)"},
            {'R', "|Z"},
            {'S', "$"},
            {'T', "']['"},
            {'U', "|_|"},
            {'V', "\\/"},
            {'W', "\\/\\/"},
            {'X', "}{"},
            {'Y', "`/"},
            {'Z', "2"}
    };

string convertoAlpha(const string&);//here are the protoypes of the functions
void testisAlpha();
void solve();

int main(int argc, char* argv[]) {//this runs the test function and the solve function
	if (argc == 2 and string(argv[1]) == "test")
		testisAlpha();
	else
		solve();
}

void solve(){
    string phrase, alpha;

    cin >> phrase;

   cout << convertoAlpha(phrase) << endl;




}

string convertoAlpha(const string& phrase){
    string alpha = "";


        for (const char& c : phrase) {
        auto it = alpha_map.find(c);
        if (it != alpha_map.end()) {
            alpha += it->second;
        }
        else {
            alpha += c;
        }
        }
    return alpha;

}

void testisAlpha(){
    string phrase = ("BA");
    assert(convertoAlpha(phrase) == "8@");
    phrase = ("CC");
    assert(convertoAlpha(phrase) == "((");
    phrase = ("BOS");
    assert(convertoAlpha(phrase) == "80$");
    phrase = ("SOS");
    assert(convertoAlpha(phrase) == "$0$");

    cerr << "All unittests passed!\n";

}
