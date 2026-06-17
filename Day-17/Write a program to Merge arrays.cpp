#include <iostream>
using namespace std;

int main() {
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;
    cout << "Enter size of second array: ";
    cin >> size2;

    int arr1[size1], arr2[size2], merged[size1 + size2];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    cout << "Merged array:\n";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}

/*
Logic Explanation:
1. Take input sizes for both arrays.
2. Read elements into arr1 and arr2.
3. Create a merged array of size (size1 + size2).
4. Copy arr1 elements into merged starting from index 0.
5. Copy arr2 elements into merged starting from index size1.
6. Print the merged array.
*/
