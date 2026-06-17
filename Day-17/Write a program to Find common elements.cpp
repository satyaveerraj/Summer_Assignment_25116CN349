#include <iostream>
using namespace std;

int main() {
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;
    cout << "Enter size of second array: ";
    cin >> size2;

    int arr1[size1], arr2[size2];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    cout << "Common elements are:\n";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (arr1[k] == arr1[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    cout << arr1[i] << " ";
                }
                break; 
            }
        }
    }

    return 0;
}

/*
Logic Explanation:
1. Read sizes and elements of both arrays.
2. For each element in arr1, check if it exists in arr2.
3. If found, print it — but only if it hasn’t been printed before (to avoid duplicates).
4. The result is the list of common elements between the two arrays.
*/
