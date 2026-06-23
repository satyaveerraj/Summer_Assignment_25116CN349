#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;

    int start = 0;
    int end = text.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (text[start] != text[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Take input string from the user.
2. Use two pointers: one starting at the beginning (start) and one at the end (end).
3. Compare characters at these positions:
   - If they are equal, move inward (start++ and end--).
   - If they differ, the string is not a palindrome.
4. Continue until the pointers meet or cross.
5. If all matched, the string is a palindrome; otherwise, it is not.
*/
