#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    string temp = s1 + s1;

    return (temp.find(s2) != string::npos);
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (isRotation(str1, str2)) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are NOT rotations of each other." << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. Two strings can only be rotations if they are of the same length.
2. Concatenate the first string with itself (s1 + s1).
   Example: "ABCD" + "ABCD" = "ABCDABCD".
3. If the second string appears as a substring inside this new string,
   then it is a rotation of the first.
   Example: "CDAB" is found inside "ABCDABCD", so it's a rotation.
*/
