// Task 10: Factorial

#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 1;

    cout << "Please enter a Number: ";
    cin >> n;

    cout << "\nN = " << n << endl;

    cout << "\nN = ";
        for (int i = 1; i <= n; i++) {
        cout <<" x " << i;
        result = result * i;
    }
    
    cout << " = " << result;

    return 0;
}