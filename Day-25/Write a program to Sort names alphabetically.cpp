#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    string names[n];

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    sort(names, names + n);

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read the number of names and store them in an array of strings.
2. Use the built-in sort() function from <algorithm>:
   - It compares strings lexicographically (dictionary order).
3. After sorting, print the names one by one.
Result: The names are displayed in alphabetical order.
*/
