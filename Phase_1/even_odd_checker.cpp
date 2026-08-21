// Task 1: Even Odd Checker

#include <iostream>
using namespace std;

int main() {
    int number;
    int result;

    cout << "Enter an integer: ";
    cin >> number;

    result = number % 2;
    if (result == 0) {
        cout << number << " is an even number." << endl;
    }
    else {
        cout << number << " is an odd number." << endl;
    }
}