#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "===== MENU-DRIVEN CALCULATOR =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result = " << result << endl;
            break;

        case 2:
            result = num1 - num2;
            cout << "Result = " << result << endl;
            break;

        case 3:
            result = num1 * num2;
            cout << "Result = " << result << endl;
            break;

        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        case 5:
            cout << "Exiting calculator..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}