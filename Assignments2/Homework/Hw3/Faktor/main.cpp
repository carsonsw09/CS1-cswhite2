//This is the faktor program by Carson White student of Colorado Mesa University
//The goal of this program is to find the impact factor from the total number of citations and the total number of articles



#include <iostream>
#include <cassert>

using namespace std;
//this is the declaration of the function
double calculateImpactFactor(int citations, int totalarticles) {
    
    return (double)citations / (double)totalarticles;
}
//this is the unit test set up
void testcalculateImpactFactor() {
    assert(calculateImpactFactor(10, 100) == 0.1);
    assert(calculateImpactFactor(20, 200) == 0.1);
    assert(calculateImpactFactor(25, 125) == 0.2);
    assert(calculateImpactFactor(5, 50) == 0.1);
    assert(calculateImpactFactor(30, 150) == 0.2);
    assert(calculateImpactFactor(0, 100) == 0);
    cout << "All test cases passed!" << endl;
}
//this is the main that runs the functions and then runs the test function with in it. 
int main() {
    int citations, totalarticles;
    cout << "Enter the count of citations: ";
    cin >> citations;
    cout << "Enter the total number of articles: ";
    cin >> totalarticles;
    double impactFactor = calculateImpactFactor(citations, totalarticles);
    cout << "Impact factor: " << impactFactor << endl;

   //this runs the test function
    testcalculateImpactFactor();
    
    return 0;
}