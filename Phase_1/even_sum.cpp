// Task 9: Sum of Even Numbers

#include <iostream>

using namespace std;

int main() {
    int n;
    int checker;
    int result = 0;

    cout << "Please enter a Number: ";
    cin >> n;

    cout << "\nN = " << n << endl;

    cout << "\nN = ";
    for (int i = 1; i <= n; i++) {
        checker = i % 2;

        if (checker == 0) {
            cout << " + " << i;
            result = result + i;
        }
    }

    cout << " = " << result ;

    return 0;
}