#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Row-wise sums:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. First, we take the number of rows and columns as input.
2. Then, we read elements of the matrix.
3. For each row, we initialize a variable rowSum = 0.
4. We loop through all columns of that row and add elements to rowSum.
5. After finishing one row, we print its sum.
6. Repeat for all rows.
*/
