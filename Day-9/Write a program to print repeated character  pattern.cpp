#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + i - 1) << " ";  
        }
        cout << endl; 
    }

    return 0;
}

/*
Logic Explanation:
1. Input: User enters the number of rows (say 5).
2. Outer loop (i): Runs from 1 to 'rows'.
   - Controls how many lines are printed.
3. Inner loop (j): Runs from 1 to 'i'.
   - Prints the same character multiple times in each row.
4. Character calculation: 'A' + (i-1)
   - Row 1 → 'A'
   - Row 2 → 'B'
   - Row 3 → 'C'
   - Row 4 → 'D'
   - Row 5 → 'E'
5. Example for rows = 5:
   A
   B B
   C C C
   D D D D
   E E E E E
   This creates the repeated character pattern.
*/
