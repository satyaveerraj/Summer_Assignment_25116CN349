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

    cout << "Column-wise sums:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. First, we take the number of rows and columns as input.
2. Then, we read elements of the matrix.
3. For each column, we initialize a variable colSum = 0.
4. We loop through all rows of that column and add elements to colSum.
5. After finishing one column, we print its sum.
6. Repeat for all columns.
*/
