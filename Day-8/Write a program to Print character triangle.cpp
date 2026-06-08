#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        char ch = 'A'; 
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++; 
        }
        cout << endl; 
    }

    return 0;
}

/*
Logic Explanation:
1. Input the number of rows.
2. The outer loop (i) runs from 1 to 'rows' → controls how many lines are printed.
3. For each row, we start with character 'A'.
4. The inner loop (j) runs from 1 to 'i' → prints characters equal to the current row number.
   - Row 1 → A
   - Row 2 → AB
   - Row 3 → ABC
   - … and so on.
5. After finishing one row, 'endl' moves to the next line.
6. This creates a triangle where each new row adds one more character than the previous.
*/