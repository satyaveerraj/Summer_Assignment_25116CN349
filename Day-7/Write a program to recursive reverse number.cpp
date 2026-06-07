#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0) {
        return rev;  
    }
    return reverseNumber(n / 10, rev * 10 + (n % 10)); 
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reversed = reverseNumber(number);
    cout << "Reversed number = " << reversed << endl;

    return 0;
}