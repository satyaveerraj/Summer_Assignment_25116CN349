#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0, base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;  
        decimal += lastDigit * base;   
        binary = binary / 10;          
        base = base * 2;               
    }

    cout << "Decimal representation: " << decimal << endl;

    return 0;
}