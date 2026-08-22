//Task 6: Simple Calculator

#include <iostream>

using namespace std;

int main() {
    const int size = 2;
    double num1, num2;
    double result = 0;
    int choice;
    
    cout << "-----Simple Calculator-----" << endl << endl;
    cout << "[1] ADD +       [2] SUBTRACT -" << endl;
    cout << "[3] MULTIPLY *  [4] DIVIDE /" << endl;

    do {
        cout << "Enter Choice: ";
        cin >> choice;
    }
    while (choice < 1 || choice > 4);
    if (choice == 1 || choice == 2) {
        int number[size];

        cout << "Enter Digits: " << endl;
        for (int i = 0; i < size; i++) {
            cout << "Digit [" << (i + 1) << "]: ";
            cin >> number[i];
        }

        if (choice == 1) {
            for (int i = 0; i < size; i++) {
                result += number[i];
            }
        } 
        else if (choice == 2) {
            result = number[0];  
            for (int i = 1; i < size; i++) {
                result -= number[i];
            }
        }
    }

    else if (choice == 3) {
        cout << "Enter 2 Digits to Multiply:" << endl;
        cout << "Digit [1]: ";
        cin >> num1;
        cout << "Digit [2]: ";
        cin >> num2;

        result = num1 * num2;
    }

    else if (choice == 4) {
        cout << "Enter 2 Digits to Divide:" << endl;
        cout << "Digit [1]: ";
        cin >> num1;
        cout << "Digit [2]: ";
        cin >> num2;
        
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << endl << "Error: Cannot divide by zero.";
            return 0;
        }
    }
    
    cout << endl << result;
    return 0;
}