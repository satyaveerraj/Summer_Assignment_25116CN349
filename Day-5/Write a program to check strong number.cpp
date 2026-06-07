#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    int sum = 0;

    // Extract digits and calculate sum of factorials
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if Strong Number
    if (sum == original) {
        cout << original << " is a Strong Number." << endl;
    } else {
        cout << original << " is NOT a Strong Number." << endl;
    }

    return 0;
}