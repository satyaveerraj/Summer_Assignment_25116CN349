#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= i; j++){
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. We first take input for the number of rows.
2. The outer loop (i) runs from 1 to 'rows' → it controls how many lines are printed.
3. The inner loop (j) runs from 1 to 'i' → it prints stars equal to the current row number.
   - Row 1 → 1 star
   - Row 2 → 2 stars
   - Row 3 → 3 stars
   - … and so on.
4. After printing stars for each row, 'endl' moves the cursor to the next line.
5. This creates a half pyramid shape where each new row adds one more star.
*/
