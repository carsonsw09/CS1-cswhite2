#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

string solution(map<string, string> fish);

int main(void)
{

    string line;
    string key;
    string value;
    map<string, string> babel;
    
   
    while(true)
    {
        string key, value;
        cin >> key;
        if(key == "\n")
            break;
        cin >> value;
        babel[key] = value;
    }

    string answer = solution(babel);
    cout << answer;

    return 0;
}

string solution(map<string, string> fish)
{
    string answer = "";
    string key;

    while(getline(cin, key))
    {
        if(key == "")
            break;
        if(fish.count(key) == 1)
        {
            answer += fish[key] + '\n';
        }
        else
        {
            answer += "eh\n";
        }
    }

    return answer;
}

void test(){
    string line = ()





}