#include "CalculatorProcesses.h"
#include <iomanip>

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

    string blankSpace;

    //*********************************************************
    // Class grades must be entered as letters (A, A-, B+...)
    // and must be capitalized to be recognized by the program.
    //*********************************************************

    for (int i = 0; i < numOfClasses; i++) {

        cout << "Enter class name: ";
        //*****************************************
        // Gets the blank space left on the input.
        //*****************************************
        getline(cin, blankSpace);
        getline(cin, className);
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





double CalculateGPA(vector<string> grades, vector<int> credits) {
    vector<double> qualityPts;
    // qualityPts = grades * credits

    vector<double> numericGrades;


    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] == "F") {
            numericGrades.push_back(0);
        }
        else if (grades[i] == "D") {
            numericGrades.push_back(1);
        }
        else if (grades[i] == "D+") {
            numericGrades.push_back(1.3);
        }
        else if (grades[i] == "C-") {
            numericGrades.push_back(1.7);
        }
        else if (grades[i] == "C") {
            numericGrades.push_back(2);
        }
        else if (grades[i] == "C+") {
            numericGrades.push_back(2.3);
        }
        else if (grades[i] == "B-") {
            numericGrades.push_back(2.7);
        }
        else if (grades[i] == "B") {
            numericGrades.push_back(3);
        }
        else if (grades[i] == "B+") {
            numericGrades.push_back(3.3);
        }
        else if (grades[i] == "A-") {
            numericGrades.push_back(3.7);
        }
        else if (grades[i] == "A" || grades[i] == "A+") {
            numericGrades.push_back(4);
        }

        // Calculate quality points
        qualityPts.push_back(numericGrades[i] * credits[i]);
    }

    int totalCredits = 0;
    double totalQualityPts = 0;

    for (int i = 0; i < credits.size(); i++) {
        totalCredits += credits[i];
    }

    for (int i = 0; i < qualityPts.size(); i++) {
        totalQualityPts += qualityPts[i];
    }

    double avgGPA;
    avgGPA = totalQualityPts / totalCredits;

    return avgGPA;
}




void ShowReport(vector<string> names, vector<int> credits, vector<string> grades, double GPA) {
    // Display report heading
    cout << setw(20) << "CLASS" << setw(20) << "CREDITS" << setw(20) << "GRADE" << endl;
    cout << "    -------------------------------------------------------------------" << endl;

    for (int i = 0; i < names.size(); i++) {
        cout << setw(20) << names[i] << setw(17) << credits[i] << setw(21) << grades[i] << endl << endl;
    }

    cout << "    Average GPA: " << GPA << endl << endl << endl << endl;
}