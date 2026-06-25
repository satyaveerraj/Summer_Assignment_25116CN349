#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.length() < b.length();
    });

    cout << "\nWords sorted by length:\n";
    for (const string &w : words) {
        cout << w << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read the number of words and store them in a vector.
2. Use sort() with a custom comparator:
   - Compare lengths of two words.
   - Place the shorter word before the longer one.
3. After sorting, print the words in order of increasing length.
Result: Words are displayed from shortest to longest.
*/
