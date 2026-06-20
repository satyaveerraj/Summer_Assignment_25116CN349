#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], difference[rows][cols];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "Difference of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << difference[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. First, we take the number of rows and columns as input.
2. Then, we read elements of the first and second matrices.
3. To subtract matrices, we subtract corresponding elements:
   difference[i][j] = matrix1[i][j] - matrix2[i][j].
4. Finally, we print the resulting matrix in proper format.
*/
