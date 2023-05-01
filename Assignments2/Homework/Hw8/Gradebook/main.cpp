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

double calculateAveragegrade(const StudentRecord& student) {//this is the funciton to find the average grade the students got
    return (student.test1 + student.test2 + student.test3 + student.test4) / 4.0;
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

struct StudentRecord {

    string fname;
    string lname;

    int test1;
    int test2;
    int test3;
    int test4;
};

int main() {
    string inputFileName, outputFileName;

    cout << "Enter input file name: ";
    cin >> inputFileName;

    ifstream inputFile(inputFileName);


    vector<StudentRecord> students;

    while(!inputFile.eof()) {
        StudentRecord student;
        inputFile >> student.fname >> student.lname >> student.test1 >> student.test2 >> student.test3 >> student.test4;
        students.push_back(student);
    }

    cout << "Enter output file name: ";
    cin >> outputFileName;

    ofstream outputFile(outputFileName);



    outputFile << "First name"
                << "Last name"
               << "Test 1"
               << "Test 2"
               << "Test 3"
               << "Test 4"
               << "Average"
               << "Grade"
               << endl;

    for(const auto& student : students) {
        double avgGrade = calculateAveragegrade(student);
        char letterGrade = calculateLetterGrade(avgGrade);

        outputFile << student.fname
                    << student.lname
                   << student.test1
                   << student.test2
                   << student.test3
                   << student.test4
                   << avgGrade
                   << letterGrade
                   << endl;
    }


    return 0;
}




