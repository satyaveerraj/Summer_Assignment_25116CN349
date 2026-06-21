#include <iostream>
using namespace std;

int main() {
    char str[200];
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}

/*
Logic Explanation:
1. Read the string from the user.
2. Convert each character to lowercase to simplify comparison.
3. Check if the character is an alphabet (between 'a' and 'z').
4. If it is a vowel (a, e, i, o, u), increment the vowel counter.
5. Otherwise, increment the consonant counter.
6. At the end, display both counts.
*/
