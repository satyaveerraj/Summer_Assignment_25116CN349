#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams." << endl;
        return 0;
    }

    string sorted1 = str1;
    string sorted2 = str2;
    sort(sorted1.begin(), sorted1.end());
    sort(sorted2.begin(), sorted2.end());

    if (sorted1 == sorted2) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read two strings from the user.
2. If their lengths differ, they cannot be anagrams.
3. Sort both strings alphabetically.
4. If the sorted versions are identical, the strings are anagrams.
5. Otherwise, they are not.
*/
