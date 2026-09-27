// Task 12: Count Digits

#include <iostream>

using namespace std;

int main() {
    int num, n;
    int count = 0;

    cout << "Counting Digits..." << endl << endl;
    cout << "Enter a Number: ";
    cin >> num;

    while (num != 0) {
        num = num / 10;
        n = num/10;
        if(n == 0) {
            count++;
        }
        count++;
    }


    cout << "\nNumbers Counted: " << count;

    return 0;
}