#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str) {
    string result = "";
    bool seen[256] = {false}; 

    for (char ch : str) {
        if (!seen[(unsigned char)ch]) {
            result += ch;       
            seen[(unsigned char)ch] = true; 
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = removeDuplicates(input);
    cout << "String after removing duplicates: " << output << endl;

    return 0;
}

/*
LOGIC EXPLANATION:
1. Create a boolean array 'seen' to track which characters have appeared.
2. Traverse the string character by character.
3. If a character has not been seen before, add it to the result and mark it as seen.
4. If it has already appeared, skip it.
5. Finally, print the result string which contains only unique characters.
*/
