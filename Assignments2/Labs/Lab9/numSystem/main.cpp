/*
    CS1 - Vector Lab
    Updated by: Carson White
    Date: 4/13/23
    Program: Number system converter  
    The program converts decimal (unsigned int) number to binary and octol representations.
    Lab demonstrates the vector application. 
*/

#include <iostream> 
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <cctype>

using namespace std;

using llu = unsigned long long int;

// System specific macro function sysclear that 
// clears console text
// NOTE: system call is not security best practice!
#ifdef _WIN32
#define clearScreen() system ("cls") // not secure!
#else
#define clearScreen() system ("clear") // not secure!
#endif

// converts decimal number to binary representation
string decToBin(llu);

// converts binary number to decimal representation
llu binToDec(string binaryNum);

// converts decimal number to octal representation
string decToOct(llu);

// converts octal number to decimal number
llu octToDec(string octalNum);

// function to display and capture menu options
int menuOption();

int main()
{
    llu decimalNum;
    int choice;
    string octalNum, binaryNum;
    do {
        clearScreen();
        cout << "Decimal, Binary, and Octal Number System Converter.\n";
        choice = menuOption();
        switch(choice) {
            case 2:
                // FIXME1//fixed
                cout << "Enter a binary line: ";
                cin >> binaryNum;
                decimalNum = binToDec(binaryNum);
                printf("(%s) base 2 = (%llu) base 10\n", binaryNum.c_str(), decimalNum);
                break;
            case 1:
                // FIXME2//fixed
                cout << "Enter a positive whole decimal number: ";
                cin >> decimalNum;
                binaryNum = decToBin(decimalNum);
                printf("(%llu) base 10 = (%s) base 2\n", decimalNum, binaryNum.c_str());
                break;
            case 3:
                cout << "Enter a positive whole decimal number: ";
                cin >> decimalNum;
                octalNum = decToOct(decimalNum);
                printf("(%llu) base 10 = (%s) base 8\n", decimalNum, octalNum.c_str());
                break;
            case 4:
                cout << "Enter a positive octal number: ";
                cin >> octalNum;
                decimalNum = octToDec(octalNum);
                printf("(%s) base 8 = (%llu) base 10\n", octalNum.c_str(), decimalNum);
                break;
            case 5:
                break;
        }
        if (choice != 5) {
            cin.ignore();
            cout << "Enter to continue...";
            cin.get();
        }
    } while (choice != 5);
    cin.ignore();
    cout << "Good bye! Enter to quit...";
    cin.get();
    return 0;
}

string decToBin(llu num) {
    // FIXME3 - implement algorithm step in DataTypesAndVariables.ipynb notes
    // or use hint from decToOct function//mabybe fixed
    vector<int> binary;
    int divisor = 2;//base 2
    llu quotient = num;
    int remainder;
    cout << "quotient = " << quotient << endl;
    while (quotient !=0) {
        remainder = quotient%divisor;
        quotient = quotient/divisor;
        binary.push_back(remainder);
    cerr << "quotient = " << quotient << " " << remainder << endl;
    }
    string ans = "";
    while(not binary.empty()) {
        ans += to_string(binary.back());
        binary.pop_back();
    }

    return ans;
}

llu binToDec(string binaryNumber)
{
    // FIXME4 - implement algorithm described in DataTypesAndVariables.ipynb notes
    // or use hints from binToOct function//m fixed
    llu ans = 0;
    int exp;
    for(int i = binaryNumber.size()-1; i>=0; i--) {
        exp = binaryNumber.size()-1 - i;
        int digit = int(binaryNumber[i]) - int('0');
        ans += digit*pow(2, exp);
    }
    return ans;

    return 0;
}

string decToOct(llu num)
{
    /*
    Algorithm steps:
    1. repeteadly divide the decimal number by base 8 until the quotient becomes 0
    2. collect the remainder for each division
    3. reverse the order of the remainders 
        - the first remainder is the last digit in octal
    */
    vector<int> octal;
    int divisor = 8; // base 8
    llu quotient = num;
    int remainder;
    // step 1 and 2
    cout << "quotient = " << quotient << endl;
    while (quotient != 0) {
        remainder = quotient%divisor;
        quotient = quotient/divisor;
        octal.push_back(remainder);
        // debug log
        cerr << "quotient = " << quotient << " " << remainder << endl;
    }

    // step 3. convert octal vector into string for easy printing the result
    // collect remainders in reverse order
    string ans = "";
    while(not octal.empty()) {
        // collect from the last element
        ans += to_string(octal.back());
        // remove the last element
        octal.pop_back();
    }
    return ans;
}


llu octToDec(string octalNumber)
{
    /* Algorithm steps:
    1. multiply each octal digit by its place value in octal
    2. sum all place values
    e.g. (173) base 8 = 1x8^2 + 7x8^1 + 3x8^0 = 64+56+3 = (123) base 10
    */
    llu ans = 0;
    int exp;
    // traverse from last digit to the first digit of octal number
    for(int i = octalNumber.size()-1; i>=0; i--) {
        exp = octalNumber.size()-1 - i;
        int digit = int(octalNumber[i]) - int('0');
        // step 1 and 2
        ans += digit*pow(8, exp);
    }
    return ans;
}

int menuOption() {
    int choice;
    cout << "Menu options: \n"
        << "1. Convert Decimal to Binary Number System\n"
        << "2. Convert Binary to Decimal Number System\n"
        << "3. Convert Decimal to Octal Number System\n"
        << "4. Convert Octal to Decimal Number System\n"
        << "5. Exit the program\n";
    cout << "Enter your choice: [1-5]: ";
    cin >> choice;
    return choice;
}