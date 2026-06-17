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

    int merged[size1 + size2];
    int k = 0;

    for (int i = 0; i < size1; i++) {
        merged[k++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[k++] = arr2[i];
    }

    cout << "Union of arrays:\n";
    for (int i = 0; i < k; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (merged[i] == merged[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << merged[i] << " ";
        }
    }

    return 0;
}

/*
Logic Explanation:
1. Read sizes and elements of both arrays.
2. Copy all elements into a merged array.
3. Traverse merged array and print each element only if it has not appeared before.
   - This ensures duplicates are removed.
4. The result is the union of both arrays.
*/
