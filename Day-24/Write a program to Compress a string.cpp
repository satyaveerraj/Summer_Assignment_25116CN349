#include <iostream>
#include <string>
using namespace std;

string compressString(string str) {
    string result = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            result += str[i];
            result += to_string(count);
            count = 1; // reset count
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string compressed = compressString(input);
    cout << "Compressed string: " << compressed << endl;

    return 0;
}

/*
LOGIC EXPLANATION:
1. We traverse the string character by character.
2. Count how many times a character repeats consecutively.
   Example: "aaabb" → 'a' repeats 3 times, 'b' repeats 2 times.
3. Append the character followed by its count to the result.
   So "aaabb" becomes "a3b2".
4. Reset count when a new character is encountered.
5. Final result is the compressed form of the string.
*/
