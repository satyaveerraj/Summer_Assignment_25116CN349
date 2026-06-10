#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
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
2. The outer loop (i = 1 to rows) runs once for each row.
3. For each row:
   - First inner loop prints spaces. The number of spaces decreases as 'i' increases.
     Example: For row 1, spaces = rows - 1; for row 2, spaces = rows - 2, etc.
   - Second inner loop prints stars. The number of stars follows the formula (2*i - 1).
     Example: Row 1 → 1 star, Row 2 → 3 stars, Row 3 → 5 stars, and so on.
4. After printing spaces and stars, we move to the next line.
5. This creates a centered pyramid shape made of stars.
*/