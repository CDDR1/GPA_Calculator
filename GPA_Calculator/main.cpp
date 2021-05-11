#include "CalculatorProcesses.h"

using namespace std;

int main() {
    int choice = 0;

    do {
        cout << "---------------------------------------" << endl;
        cout << " WELCOME TO THE GPA CALCULATOR PROGRAM " << endl;
        cout << "---------------------------------------" << endl << endl;
        cout << " Choose an option: " << endl;
        cout << "  (1) Calculate GPA" << endl;
        cout << "  (2) Exit" << endl << endl;
        cout << " Choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            ReadClasses();
        }
    } while (choice != 2);

    cout << "Thank you, see you soon :)" << endl;

    return 0;
}