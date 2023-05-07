//My name is Carson White and I am a computer science major at Colorado Mesa University

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct StudentRecord {

    string fname;
    string lname;

    int test1;
    int test2;
    int test3;
    int test4;
};

double calculateAveragegrade(const StudentRecord& student) {//this is the funciton to find the average grade the score got
    return (student.test1 + student.test2 + student.test3 + student.test4) / 4.0;
}
void Getline( ofstream &outputFile){
    for(int i=0; i<90;i++){
        outputFile << "=";



    }
    outputFile << endl;


}

char calculateLetterGrade(double score) {//this calculates their final letter grade using if else statements
    if(score >= 90.0) {
        return 'A';
    } else if(score >= 80.0) {
        return 'B';
    } else if(score >= 70.0) {
        return 'C';
    } else if(score >= 60.0) {
        return 'D';
    } else {
        return 'F';
    }
}
void bubble_sort(vector<StudentRecord>& score) {
    int n = score.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (score[j] < score[j + 1]) {
                swap(score[j], score[j + 1]);
            }
        }
    }
}





int main() {
    string inputFileName, outputFileName;

    cout << "Enter input file name: ";
    cin >> inputFileName;

    ifstream inputFile(inputFileName);


    vector<StudentRecord> score;

    while(!inputFile.eof()) {
        StudentRecord student;
        inputFile >> student.fname >> student.lname >> student.test1 >> student.test2 >> student.test3 >> student.test4;
        score.push_back(student);
    }
    bubble_sort(score);

    cout << "Enter output file name: ";
    cin >> outputFileName;

    ofstream outputFile(outputFileName);

    Getline(outputFile);
    outputFile 
            << "Fname " << setw(20)
            << "Lname " << setw(20)
            << "Test 1  " << setw(10)
            << "Test 2  " << setw(10)
            << "Test 3  " << setw(10)
            << "Test 4  " << setw(10)
            << "Average  " << setw(10)
            << "Grade  " 
            << endl;
    Getline(outputFile);

    for(const auto& student : score) {
        double avgGrade = calculateAveragegrade(student);
        char letterGrade = calculateLetterGrade(avgGrade);

     outputFile 
            << student.fname << setw(20)
            << student.lname << setw(20)
            << student.test1 << setw(10)
            << student.test2 << setw(10)
            << student.test3 << setw(10)
            << student.test4 << setw(10)
            << avgGrade << setw(10)
            << letterGrade << setw(10)
            << endl;
    }
    Getline(outputFile);


    return 0;
}




