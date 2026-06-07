#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;  // store the original number

    while (num != 0) {
        int digit = num % 10;             
        reversed = reversed * 10 + digit; 
        num /= 10;                        
    }

    if (original == reversed)
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;

    return 0;
}