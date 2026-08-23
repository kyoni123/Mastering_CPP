// Task 7: Multiplication Table

#include <iostream> 
#include <iomanip>

using namespace std;

int main() {
    const int size = 10;
    int num;

    cout << "----- Multiplication Table -----" << endl << endl;
    cout << "Enter a Digit: ";
    cin >> num;
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << "  " << setw(2) << (i + 1) << " x " << num << " = " << setw(3) << (i + 1) * num << endl;
    }

    return 0;
}