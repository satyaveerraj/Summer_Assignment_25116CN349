#include <iostream>
using namespace std;

int main() {
    int size1, size2;

    cout << "Enter size of first sorted array: ";
    cin >> size1;
    cout << "Enter size of second sorted array: ";
    cin >> size2;

    int arr1[size1], arr2[size2], merged[size1 + size2];

    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    while (j < size2) {
        merged[k++] = arr2[j++];
    }

    cout << "Merged sorted array:\n";
    for (int x = 0; x < size1 + size2; x++) {
        cout << merged[x] << " ";
    }

    return 0;
}

/*
Logic Explanation:
1. Read two sorted arrays from the user.
2. Use two pointers (i for arr1, j for arr2).
3. Compare elements at arr1[i] and arr2[j]:
   - Place the smaller one into merged[k].
   - Move the pointer of the chosen array forward.
4. Continue until one array is exhausted.
5. Copy any remaining elements from the other array.
6. The result is a single sorted merged array.
*/
