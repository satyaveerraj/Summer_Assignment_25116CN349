#include <iostream>
using namespace std;

int main() {
    char str[200];

    cout << "Enter a string: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}

/*
Logic Explanation:
1. Read the string from the user.
2. Each lowercase letter in ASCII ranges from 'a' (97) to 'z' (122).
3. Each uppercase letter is 32 positions before its lowercase counterpart.
   Example: 'a' (97) → 'A' (65).
4. So, if a character is between 'a' and 'z', subtract 32 to convert it to uppercase.
5. Print the modified string.
*/
