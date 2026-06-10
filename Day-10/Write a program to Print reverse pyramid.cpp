#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. We take 'rows' as input to decide the height of the pyramid.
2. The outer loop runs from 'rows' down to 1, so the largest row prints first.
3. For each row:
   - First inner loop prints spaces. The number of spaces increases as 'i' decreases.
     Example: For top row (i = rows), spaces = 0; next row has 1 space, then 2, etc.
   - Second inner loop prints stars. The number of stars follows the formula (2*i - 1).
     Example: Top row → (2*rows - 1) stars, next row fewer stars, until the last row has 1 star.
4. After printing spaces and stars, we move to the next line.
5. This creates an upside-down pyramid shape made of stars.
*/