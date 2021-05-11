#include "CalculateGPA.h"
#include <iostream>


using namespace std;

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
        //qualityPts[i] = numericGrades[i] * credits[i];
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