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

    bool symmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        cout << "The matrix is symmetric." << endl;
    else
        cout << "The matrix is not symmetric." << endl;

    return 0;
}

/*
LOGIC EXPLANATION:
1. A matrix is symmetric if it is equal to its transpose.
   That means matrix[i][j] == matrix[j][i] for all i, j.
2. We loop through all elements and compare them with their transpose positions.
3. If any mismatch is found, the matrix is not symmetric.
4. Otherwise, it is symmetric.
*/
