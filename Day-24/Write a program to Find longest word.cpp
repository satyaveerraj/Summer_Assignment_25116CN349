#include <iostream>
#include <string>
using namespace std;

string findLongestWord(string sentence) {
    string longest = "", current = "";

    for (int i = 0; i <= sentence.length(); i++) {
        if (i < sentence.length() && sentence[i] != ' ') {
            current += sentence[i];
        } else {
            if (current.length() > longest.length()) {
                longest = current;
            }
            current = ""; 
        }
    }

    return longest;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string longestWord = findLongestWord(sentence);
    cout << "Longest word: " << longestWord << endl;

    return 0;
}

/*
LOGIC EXPLANATION:
1. Traverse the sentence character by character.
2. Build each word until a space (or end of string) is found.
3. Compare the length of the current word with the longest word found so far.
4. If current word is longer, update the longest word.
5. Continue until the entire sentence is processed.
6. Finally, print the longest word.
*/
