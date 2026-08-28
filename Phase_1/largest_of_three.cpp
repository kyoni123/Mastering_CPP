// task 4: Largest of 3 Numbers

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter 3 Digits: " << endl;
    cout << " ";
    cin >> num1;
    cout << " ";
    cin >> num2;
    cout << " ";
    cin >> num3;

    if (num1 > num2 && num1 >num3) {
        cout << num1 << " is larger than " << num2 << " and " << num3;
    }
    else if (num2 > num1 && num2 > num3) {
        cout << num2 << " is larger than " << num1 << " and " << num3;
    }
    else if (num3 > num1 && num3 > num2) {
        cout << num3 << " is larger than " << num1 << " and " << num2;
    }
    else if (num1 == num2 && num1 > num3) {
        cout << num1 << " is equal to " << num2 << " and is larger than " << num3;
    }
    else if (num1 == num3 && num1 > num2) {
        cout << num1 << " is equal to " << num3 << " and is larger than " << num2;
    }
    else if (num3 == num2 && num3 > num1) {
        cout << num3 << " is equal to " << num2 << " and is larger than " << num1;
    }
    else {
        cout << num1 << ", " << num2 << " and " << num3 << " are Equals.";
    }
    return 0;
}

