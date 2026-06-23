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

    char maxChar = '\0';
    int maxCount = 0;
    for (auto it : freq) {
        if (it.second > maxCount) {
            maxCount = it.second;
            maxChar = it.first;
        }
    }

    if (maxChar != '\0') {
        cout << "Maximum occurring character: '" << maxChar 
             << "' (appears " << maxCount << " times)" << endl;
    } else {
        cout << "String is empty, no characters found." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read the entire string using getline().
2. Use an unordered_map:
   - Key = character
   - Value = frequency count.
3. Traverse the string to count occurrences of each character.
4. Traverse the map to find the character with the highest frequency.
5. Print that character along with how many times it appears.
*/
