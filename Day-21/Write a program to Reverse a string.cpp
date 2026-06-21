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

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}

/*
Logic Explanation:
1. First, we calculate the length of the string by counting characters until '\0'.
2. To reverse, we swap the first character with the last, the second with the second-last, and so on.
3. This swapping continues until we reach the middle of the string.
4. After all swaps, the string is reversed in place.
*/
