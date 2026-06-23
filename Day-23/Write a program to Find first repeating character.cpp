#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);  

    unordered_map<char, int> freq;
    char firstRepeating = '\0';

    for (char ch : text) {
        freq[ch]++;
        if (freq[ch] == 2) {  
            firstRepeating = ch;
            break;
        }
    }

    if (firstRepeating != '\0') {
        cout << "First repeating character: " << firstRepeating << endl;
    } else {
        cout << "No repeating character found." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read the string using getline() to include spaces.
2. Use an unordered_map to store frequency of each character.
3. Traverse the string:
   - For each character, increment its count.
   - If the count becomes 2, that character is the first repeating one.
   - Break immediately once found.
4. If no character repeats, print a message accordingly.
*/
