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

    cout << "Character frequencies:\n";
    for (auto it : freq) {
        cout << "'" << it.first << "' : " << it.second << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read the entire string using getline() so spaces are included.
2. Use an unordered_map:
   - Key = character
   - Value = frequency count
3. Traverse the string:
   - For each character, increment its count in the map.
4. Finally, print each character with its frequency.
*/
