#include "ShowReport.h"
#include "ReadClasses.h"
#include <iomanip>

using namespace std;

void ShowReport(vector<string> names, vector<int> credits, vector<string> grades, double GPA) {
    // Display report heading
    cout << setw(20) << "CLASS" << setw(20) << "CREDITS" << setw(20) << "GRADE" << endl;
    cout << "    -------------------------------------------------------------------" << endl;

    for (int i = 0; i < names.size(); i++) {
        cout << setw(20) << names[i] << setw(17) << credits[i] << setw(21) << grades[i] << endl << endl;
    }

    cout << "    Average GPA: " << GPA << endl << endl << endl << endl;
}