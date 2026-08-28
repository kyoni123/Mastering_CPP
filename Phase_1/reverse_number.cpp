// Task 11: Resverse a number

#include <iostream>

using namespace std;

int main() {
    int num;
    int n;
    int result = 0;

    cout << "Enter any Digit to Reverse it..." << endl << endl;
    cout << "Enter digit: ";
    cin >> num;

    while (num != 0) {
         n = num % 10;
        result = result * 10 + n;
        num = num / 10;
    }


    cout << result;

    return 0;
}