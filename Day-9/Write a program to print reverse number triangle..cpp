#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Input: We ask the user for the number of rows (say 5).
2. Outer loop (i): Starts from 'rows' and decreases down to 1.
   - This ensures the first line prints maximum numbers (1 to rows),
     and each subsequent line prints one less.
3. Inner loop (j): Runs from 1 to 'i' (current outer loop value).
   - It prints numbers starting from 1 up to the current row limit.
4. After printing numbers for a row, 'endl' moves to the next line.
5. Example for rows = 5:
   1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1
   This creates the reverse number triangle.
*/