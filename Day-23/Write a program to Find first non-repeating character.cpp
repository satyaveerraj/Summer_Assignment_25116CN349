#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);  

    unordered_map<char, int> freq;

    for (char ch : text) {
        freq[ch]++;
    }

    char firstUnique = '\0';
    for (char ch : text) {
        if (freq[ch] == 1) {
            firstUnique = ch;
            break;
        }
    }

    if (firstUnique != '\0') {
        cout << "First non-repeating character: " << firstUnique << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read the string using getline() to include spaces.
2. Use an unordered_map to store frequency of each character.
3. Traverse the string once to count occurrences.
4. Traverse the string again in order:
   - The first character with frequency = 1 is the answer.
5. If no such character exists, print a message accordingly.
*/
