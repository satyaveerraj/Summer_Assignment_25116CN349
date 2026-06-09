#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }

    return 0;
}

/*
Logic Explanation:
1. Input: User enters the size of the square (say 5).
2. Outer loop (i): Runs from 1 to n → controls rows.
3. Inner loop (j): Runs from 1 to n → controls columns.
4. Condition:
   - If we are at the boundary (first row, last row, first column, last column),
     print '*'.
   - Otherwise, print spaces to keep the inside hollow.
5. Example for n = 5:
   * * * * *
   *       *
   *       *
   *       *
   * * * * *
   This creates a hollow square pattern.
*/