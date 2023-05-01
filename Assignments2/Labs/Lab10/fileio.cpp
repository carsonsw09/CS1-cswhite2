/*
    CS1 - File IO Lab
    Updated by: Carson White
    Date: 4/27/23
    The program reads numbers from a file and finds statistical values from those numbers.
    Lab demonstrates the file io and vector application. 
    Statistical value's definitions for mean, median, mode, etc. can be found here: https://www.purplemath.com/modules/meanmode.htm
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const float EPSILON = 1e-4; //accuracy upto 4 decimal points

// function prototypes
void readData(vector<int> &, const string);
int findMax(const vector<int> &);
int findMin(const vector<int> &);
float findMean(const vector<int> &); // average
int findRange(const vector<int> &);
float findMedian(vector<int>);
// bonus implement findMode function
int findMode(const vector<int> &);

void writeData(const vector<int> & numbers);
void test();

int main(int argc, char* argv[]) {
    if (argc == 2 && string(argv[1]) == "test") {
        test();
        return 0;
    }
    vector<int> numbers;
    string inFile;
    cout << "Enter input file name: ";
    getline(cin, inFile);
    readData(numbers, inFile);
    writeData(numbers);
    cout << "All done. Enter to exit...";
    cin.get();
    return 0;
}

void readData(vector<int> & numbers, const string inputFileName) {
    // FIXME1: Open inputFileName for reading data//maybe fixed
    // read the data until eof marker and store each num into numbers vector
    int num;
    ifstream fin(inputFileName);
    while(inputFile >> num) {
        numbers.push_back(num);
    }

}

void writeData(const vector<int> & numbers) {
    // FIXME2
    /*
    Algorithm steps:
    1. Prompt user to enter output file name
    2. Store and use the file name to open the file in write mode
    3. Write output as shown in output.txt file with proper formatting using iomanip
    */
    

    cout << "Enter output file name: ";
    cin >> outputFileName;

    ofstream outputFile(outputFileName);

    if(!outputFile.is_open()) {
        cout << "Error: Unable to open output file." << endl;
        return 1;
    }

    //This Write output to the file
    int num1 = 100;
    int num2 = 10;
    int num3 = 5;
    int num4 = 0;
    int num5 = -99;
    int num6 = 10;
    int num7 = 99;

    //fix the out put shown right here
    outputFile.close();

    cout << "Output written to " << outputFileName << "." << endl;











}

int findMax(const vector<int> & nums) {
    int max = nums[0];
    for(int n: nums)
        max = (n>max) ? n : max;
    return max;
}

int findMin(const vector<int> & nums) {
    // FIXME3 - implement function to find and return min value in nums vector//fixed
    int min = nums[0];

    for(int n: nums)
        min = (n<min) ? n : max;

    return min;

} 

float findMean(const vector<int> & nums) {
    // same as average
    long long int sum = 0;
    for(int n: nums)
        sum += n;
    return sum/float(nums.size());
}

int findRange(const vector<int> & nums) {
    // FIXME6 - implement function that finds and returns the range value//fixed
    // range = max - min
    int min = min_element(nums.begin(), nums.end());
    int max = max_element(nums.begin(), nums.end());

    return max - min;

    
}

float findMedian(vector<int> nums) {
    sort(nums.begin(), nums.end());
    float median;
    if (nums.size() % 2 == 0) {  // even set
        median = (nums[nums.size()/2] + nums[nums.size()/2-1])/float(2);
    } else { // odd set
        median = nums[nums.size()/2];
    }
    return median;
}

void test() {
    vector<int> numbers = {100, 10, 5, 0, -99, 10, 99};
    //cout << findMean(numbers) << " " << findMean(numbers)-17.857142 << endl;
    assert(fabs(findMean(numbers)-17.857142) <= EPSILON );
    assert(findMax(numbers) == 100);
    assert(findMedian(numbers) == 10);
    vector<int> numbers1 = {10, 10, 10, 0, -10, -10};
    assert(fabs(findMean(numbers1) -1.6667) <= EPSILON  );
    assert(findMax(numbers1) == 10);
    assert(findMedian(numbers1) == 5);
    vector<int> numbers2 = {10, 10, 10, 10, 20, 20};
    assert(fabs(findMean(numbers2) -13.33333) <= EPSILON  );
    assert(findMax(number2) == 20);
    assert(findMedian(numbers2) == 10);
    vector<int> numbers3 = {10, 20, 30, 0, 30, 10};
    assert(fabs(findMean(numbers3) -16.6667) <= EPSILON  );
    assert(findMax(numbers3) == 30);
    assert(findMedian(numbers3) == 15);
    
    // FIXME7: Write at least two test cases for other functions//fixed

    cerr << "all test cases passed!\n";
}
