//  Pointers, enum type and namespace lab
//  Updated by: Carson White
//  Date: 3/27/23
//  Program demonstrates the use of preprocessor directive, namespace, enum type,
//  and pointers.

#include <cstdio>
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

// macro function
#ifdef _WIN32
#define clear() system("cls")
#else
#define clear() system("clear")
#endif

// user-defined enumerated type: OPERATION
enum OPERATION { ADD, MULTIPLY, SUBTRACT, LARGER, QUIT };

// C++ way of defining type alias
using big_int = long long int;

// C way of defining type alias
typedef long long int large_int;
// both large_int and big_int are alias to "long long int" type

// declare MyFunctions namespace
namespace MyFunctions {
    // function prototypes defined within the namespace
    big_int findSum(const big_int *, const big_int *);
    big_int findLarger(const big_int *, const big_int *);
    large_int findProduct(const large_int &, const large_int &);
    large_int findDifference(const large_int &, const large_int &);
}

void showMenu(void);
OPERATION getOperation(char);
void unittest();

int main(int argc, char* argv[]) {
    // FIXME1 - Call unittest function if "test" argument is passed to main//fixed
    // exit the program after calling unittest
    
    unittest();
   
  
    char userinput = 'b';
    bool keeprunning = true;
        while(keeprunning){
    big_int *num1; //a pointer variable to point to big_int data
    num1 = new big_int; //allocate memory in heap and store the address in num1
    big_int *num2 = new big_int; //declare num2 as a dynamic variable
    big_int *sum = new big_int; //declare sum as a dynamic variable
    large_int *prod = new large_int;
    large_int *diff = new large_int;
    big_int *larg = new big_int;
    // FIXME2 - declare dynamic variables to store difference and larger values//fixed
    // Must use these variables to store the returned values from functions

    OPERATION oper;
    
    //FIXME3: Add do... while loop to continue the program until the user wants to quit//fixed
    //FIXME4: call clear function defined above to clear the screen//fixed
   
    showMenu();
    cin >> userinput;
    oper = getOperation(userinput);
    switch (oper) {
        case ADD:
            cout << "Enter two whole numbers separated by space: ";
            // store the data by dereferencing pointers
            cin >> *num1 >> *num2;
            // passing pointers to findSum function
            *sum = MyFunctions::findSum(num1, num2);
            printf("%lld + %lld = %lld\n", *num1, *num2, *sum);
            break;
            // FIXME5: complete the rest of the cases to perform other operations//one test case fixed need to fix one more
        case SUBTRACT:
            cout << "Enter two whole numbers separated by space: ";
            cin >> *num1 >> *num2;
            *diff = MyFunctions::findDifference(num1, num2);
            printf("%lld - %lld = %lld\n", *num1, *num2);
            break;
        case LARGER://fix this test case
            cout << "Enter two whole numbers separated by space: ";
            cin >> *num1 >> *num2;
            *larg = MyFunctions::findLarger(num1, num2);
            cout << *larg;
            break;

        case MULTIPLY:
            cout << "Enter two whole numbers separated by space: ";
            // store the data by dereferencing pointers
            cin >> *num1 >> *num2;
            // passing dereferences (actural addresses) of num1 and num2
            *prod = MyFunctions::findProduct(*num1, *num2);
            printf("%lld * %lld = %lld\n", *num1, *num2, *prod);
            break;
        default:
            break;
    }
    // delete/deallocate/free memory occupied by all the dynamic variables
    delete num1;
    delete num2;
    delete sum;
    delete prod;
    delete diff;
    delete larg;
    cout << "If you want to keep playing enter y, if you want to quit enter n ";
        cin >> userinput;
    if(userinput == 'n')
    keeprunning = false;
     clear();
}
}

// Menu options
void showMenu(void) {
    cout << "Enter one of the following menu options:\n";
    cout << "[1] Add two integers\n";
    cout << "[2] Multiply two integers\n";
    cout << "[3] Subtract one integer from another\n";
    cout << "[4] Find the larger of two integers\n",
    cout << "[5] Quit the program\n";
    cout << "Enter your choice [1-4]: ";
}

// function returns OPERATION type given character choice
OPERATION getOperation(char choice) {
    OPERATION op;
    switch(choice)
    {
        case '1':
            op = ADD;
            break;
        case '4':
            op = MULTIPLY;
            break;
        case '2':
            op = SUBTRACT;
            break;
        case '3' :
            op = LARGER;
            break;
        // FIXME6 - add case for LARGER//fixed
        default:
            op = QUIT;
    }
    return op;
}

// must use MyFunctions namespace to resolve findSum function
big_int MyFunctions::findSum(const big_int *n1, const big_int *n2) {
    // dereference pointers n1 and n2 before adding their values
    return (*n1) + (*n2);
}

big_int MyFunctions::findLarger(const big_int *n1, const big_int *n2)
    if (n1 > n2) {
    return n1;
  } else {
    return n2;
  }

// FIXME7: define findLarger function declared inside MyFunctions namespace
// function returns the larger of the two given numbers//fixed

// find Product function definition
large_int MyFunctions::findProduct(const large_int &n1, const large_int &n2) {
    return n1 * n2;
}

large_int MyFunctions::findDifference(const large_int &n1, const large_int &n2) {
    return (n1) - (n2);
}
// FIXME8: define findDifference function declared inside MyFunctions namespace
// return the value of second big_int subtracted from the first//fixed

// function to unittest other functions
void unittest() {
    big_int *n1, *n2, *ans;
    n1 = new big_int;
    *n1 = 100000000;
    n2 = new big_int;
    *n2 = 999999999;
    ans = new big_int;
    *ans = MyFunctions::findSum(n1, n2);
    assert(*ans == 1099999999);
    
    ans = new big_int;
    *ans = MyFunctions::findLarger(n1, n2);
    assert(*ans == 100000000);

    large_int &n1, &n2, *ans;
    n1 = new large_int;
    *n1 = 20;
    n2 = new large_int;
    *n2 = 10;
    ans = new large_int
    *ans = MyFunctions::findProduct(n1, n2);
    assert(*ans == 200);

    ans = new large_int;
    *ans = MyFunctions::findDifference(n1, n2);
    assert(*ans == 10);






    cerr << "Yay... All test cases passed!\n";
    // FIXME9: Test findProduct, findDifference and findLarger functions with atleast 1 test case//fixed
    delete n1;
    delete n2;
    delete prod;
    delete diff;
    delete sum;
    delete larg;
    // FIXME10: Delete all the dynamic variables//fixed
}