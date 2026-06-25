#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    set<char> set1, set2, common;

    for (char c : str1) {
        set1.insert(c);
    }

    for (char c : str2) {
        set2.insert(c);
    }

    for (char c : set1) {
        if (set2.find(c) != set2.end()) {
            common.insert(c);
        }
    }

    cout << "Common characters: ";
    if (common.empty()) {
        cout << "None";
    } else {
        for (char c : common) {
            cout << c << " ";
        }
    }

    return 0;
}

/*
Logic Explanation:
1. Read two strings from the user.
2. Store unique characters of each string in separate sets.
3. Compare the sets:
   - If a character from set1 exists in set2, it is common.
4. Store common characters in another set to avoid duplicates.
5. Print the common characters.
*/
