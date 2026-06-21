#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string is: " << length << endl;

    return 0;
}

/*
Logic Explanation:
- Strings in C++ are stored as character arrays ending with a null character '\0'.
- We start from index 0 and keep checking each character.
- For every character that is not '\0', we increase the counter.
- When we reach '\0', it means the string has ended.
- The counter value at that point gives the total length of the string.
*/
