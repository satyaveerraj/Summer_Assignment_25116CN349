#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int choice;
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n--- Menu Driven String Operations ---\n";
        cout << "1. Display String\n";
        cout << "2. Find Length of String\n";
        cout << "3. Reverse String\n";
        cout << "4. Count Vowels and Consonants\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Check Palindrome\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length = " << str.length() << endl;
                break;

            case 3: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                cout << "Reversed string = " << rev << endl;
                break;
            }

            case 4: {
                int vowels = 0, consonants = 0;
                for (char c : str) {
                    char ch = tolower(c);
                    if (isalpha(ch)) {
                        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                            vowels++;
                        else
                            consonants++;
                    }
                }
                cout << "Vowels = " << vowels << ", Consonants = " << consonants << endl;
                break;
            }

            case 5: {
                string upper = str;
                transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
                cout << "Uppercase string = " << upper << endl;
                break;
            }

            case 6: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                if (rev == str)
                    cout << "The string is a Palindrome." << endl;
                else
                    cout << "The string is NOT a Palindrome." << endl;
                break;
            }

            case 7:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}

/*
Logic Explanation
1. User enters a string at the beginning.
2. A do-while loop keeps showing the menu until the user chooses Exit (option 7).
3. Switch-case handles different string operations:
   - Case 1: Display the string.
   - Case 2: Find length using .length().
   - Case 3: Reverse string using reverse() function.
   - Case 4: Count vowels and consonants by scanning each character.
   - Case 5: Convert string to uppercase using transform().
   - Case 6: Check if string is palindrome by comparing with its reverse.
   - Case 7: Exit program.
4. Default case handles invalid input.
*/
