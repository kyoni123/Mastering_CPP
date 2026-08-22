// Task 5: Grade Calculator

#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int grade[size];
    double sum = 0;
    double average;

    for (int i = 0; i < size; i++) {
        cout << "Enter Grade " << (i +1) << ": ";
        cin >> grade[i];
    }
    
    for (int i = 0; i < size; i++) {
        sum += grade[i];
    }
    
    average = sum / size;

    cout << "\nTotal Grade is " << sum << " with an Average of " << average;

    return 0;
}