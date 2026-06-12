#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;      
    int reversed = 0;         

    while (num > 0) {
        int digit = num % 10;          
        reversed = reversed * 10 + digit; 
        num = num / 10;                
    }

    return (original == reversed);    
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Store the original number in a variable.
2. Reverse the number:
   - Extract the last digit using num % 10.
   - Add it to the reversed number (reversed * 10 + digit).
   - Remove the last digit using num / 10.
3. After the loop, compare the reversed number with the original.
4. If both are equal → the number is a palindrome.
   Otherwise → it is not a palindrome.

Example: 1221
- Digits extracted: 1, 2, 2, 1
- Reversed becomes 1221
- Since original == reversed → Palindrome.
*/