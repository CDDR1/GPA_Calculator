#include "ReadClasses.h"
#include "CalculateGPA.h"
#include "ShowReport.h"

using namespace std;

void ReadClasses() {
    int numOfClasses;

    cout << "Enter the number of classes: ";
    cin >> numOfClasses;
    cout << endl;

    vector<string> classNames;
    vector<string> classGrades;
    vector<int> classCredits;

    string className;
    string classGrade;
    int credits;

    //*********************************************************
    // Class grades must be entered as letters (A, A-, B+...)
    // and must be capitalized to be recognized by the program.
    //*********************************************************

    for (int i = 0; i < numOfClasses; i++) {

        cout << "Enter class name: ";
        cin >> className;
        cout << endl;
        classNames.push_back(className);

        cout << "Enter grade: ";
        cin >> classGrade;
        cout << endl;
        classGrades.push_back(classGrade);

        cout << "Enter class credits: ";
        cin >> credits;
        cout << endl;
        classCredits.push_back(credits);

        cout << endl;
    }

    double avgGPA;
    avgGPA = CalculateGPA(classGrades, classCredits);

    ShowReport(classNames, classCredits, classGrades, avgGPA);
}