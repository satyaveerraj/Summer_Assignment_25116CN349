#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

     for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; 
    }

    return 0;
}

/*
Logic Explanation:
1. We first take input for the number of rows (say 5).
2. The outer loop starts from 'rows' and decreases down to 1.
   - This ensures that the first line prints maximum stars, 
     and each subsequent line prints one less.
3. The inner loop runs from 1 to 'i' (current outer loop value).
   - It prints stars equal to the current row number.
4. After printing stars for a row, we use 'endl' to move to the next line.
5. Example for rows = 5:
   ***** 
   ****
   ***
   **
   *
   This creates the reverse pyramid/star pattern.
*/
