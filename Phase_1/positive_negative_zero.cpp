// Task 2: Positive-Negative-Zero

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an Integer: ";
    cin >> number;

    if (number == 0) {
        cout << number << " is a Zero Number";
    }
    else if (number < 0) {
        cout << number << " is a Negative Number";
    }
    else {
        cout << number << " is a Positive Number";
    }

    return 0;
}