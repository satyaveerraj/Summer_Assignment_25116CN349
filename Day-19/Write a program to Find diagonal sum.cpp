#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];             
        secondarySum += matrix[i][n - i - 1];  
    }

    cout << "Sum of primary diagonal = " << primarySum << endl;
    cout << "Sum of secondary diagonal = " << secondarySum << endl;

    return 0;
}

/*
LOGIC EXPLANATION:
1. A square matrix has two diagonals:
   - Primary diagonal: elements where row index == column index (matrix[i][i]).
   - Secondary diagonal: elements where row index + column index == n - 1 (matrix[i][n - i - 1]).
2. We loop through the matrix once, adding elements from both diagonals.
3. Finally, we print the sum of the primary diagonal and the sum of the secondary diagonal.
*/
