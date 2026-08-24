// Task 8: Sum from 1 to N

#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 0;

    cout << "Please enter a Number: ";
    cin >> n;

    cout << "\nN = " << n << endl;

    cout << "\nN = ";
    for (int i = 1; i <= n; i++) {
        cout <<" + " << i;
        result = result + i;
    }

    cout << " = " << result << endl;

    return 0;
}