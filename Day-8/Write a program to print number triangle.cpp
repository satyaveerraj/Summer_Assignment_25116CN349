#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Input the number of rows.
2. The outer loop (i) runs from 1 to 'rows' → controls how many lines are printed.
3. The inner loop (j) runs from 1 to 'i' → prints numbers starting from 1 up to the current row number.
   - Row 1 → 1
   - Row 2 → 12
   - Row 3 → 123
   - … and so on.
4. After finishing one row, 'endl' moves to the next line.
5. This creates a triangle where each new row adds one more number than the previous.
*/