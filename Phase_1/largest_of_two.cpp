// task 3: Largest 2 Numbers

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter 2 Digits: " << endl;
    cout << " ";
    cin >> num1;
    cout << " ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is larger than " << num2;
    }
    else if (num2 > num1) {
        cout << num2 << " is larger than " << num1;
    }
    else {
        cout << num1 << " and " << num2 << " are Equals.";
    }
    return 0;
}

