#include "CalculatorProcesses.h"

using namespace std;

int main() {
    int choice = 0;

    // This is the menu that is displayed to the user.
    do {
        cout << "---------------------------------------" << endl;
        cout << " WELCOME TO THE GPA CALCULATOR PROGRAM " << endl;
        cout << "---------------------------------------" << endl << endl;
        cout << " Choose an option: " << endl << endl;
        cout << "  (1) Calculate GPA" << endl;
        cout << "  (2) Exit" << endl << endl << endl;
        cout << " Choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            ReadClasses();
        }
    } while (choice != 2);

    cout << "Thank you, see you soon :)" << endl;

    //*********************************************************
    // Class grades must be entered as letters (A, A-, B+...)
    // and must be capitalized to be recognized by the program.
    //*********************************************************

    return 0;
}