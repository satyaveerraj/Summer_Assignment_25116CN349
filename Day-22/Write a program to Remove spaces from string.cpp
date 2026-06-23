#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);  

    string result = "";

    for (char ch : text) {
        if (ch != ' ') {
            result += ch;
        }
    }

    cout << "String without spaces: " << result << endl;

    return 0;
}

/*
Logic Explanation:
1. Read the entire string using getline() so spaces are included.
2. Create an empty result string.
3. Traverse each character of the input string:
   - If the character is not a space, add it to the result.
   - If it is a space, skip it.
4. Finally, print the result string which contains no spaces.
*/
