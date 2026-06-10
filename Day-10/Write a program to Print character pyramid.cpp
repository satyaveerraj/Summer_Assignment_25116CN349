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
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            cout << ch;
            ch++; 
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
     Example: Row 1 → rows-1 spaces, Row 2 → rows-2 spaces, etc.
   - Second inner loop prints characters starting from 'A' up to the ith character.
     Example: Row 1 → "A", Row 2 → "AB", Row 3 → "ABC", and so on.
4. After printing spaces and characters, we move to the next line.
5. This creates a centered pyramid shape made of increasing characters.
*/