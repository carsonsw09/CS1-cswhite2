//My name is Carson White and I am computer science major at Colorado Mesa University
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string spycode[5];//this sets a string array for the 5 lines being entered


string fbitracker(string spycode[]){//this is the function for finding the string fbi
    bool found_fbi = false;
    string ans = "";

  

  for(int i=0; i<5; i++) {
    if(spycode[i].find("FBI") != string::npos) {//this checks the array for the string FBI
        if(!found_fbi){
            ans = "FBI found on line ";
        }
        ans += to_string (i+1);
        ans += " " ;
      //cout << "FBI found on line " << i+1 << endl;
      found_fbi = true;
    }
  }

  if(!found_fbi) {//if no FBI is found this is returned
   ans = "He got away!";
  }
  return ans;
    
}

void unitTest(){//this is the unit test with 3 different test cases
string spycode[] = {"Moose" , "MooseFBI", "BigMooose", "BigFBI", "MooseBig"};
assert(fbitracker(spycode) == "FBI found on line 2 4");

string spycode1[] = {"Boston", "Colorado", "Denver", "Iowa", "Californa"};
assert(fbitracker(spycode) == "He got away");

string spycode2[] ={"ChickenFBI", "Mashpotatoes", "Steakwithsauce", "Asparagus", "Banquet"};
assert(fbitracker(spycode) == "FBI found on line 1");

cerr << "All test cases passed!"  << endl;





}

int main(){


string spycode[5];//the array is delcared here

for(int i=0; i<5; i++) {
    cout << "Enter line " << i+1 << ": ";
    getline(cin, spycode[i]);//the info is then put into the array here
  }



 cout << fbitracker(spycode); //fbitracker is ran here

 unitTest();




    return 0;
}