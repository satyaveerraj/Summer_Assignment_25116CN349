#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Logic Explanation:
To sort an array in descending order:
1. Compare each element with the rest of the elements.
2. If the current element is smaller than the next one, swap them.
3. This ensures that larger elements move toward the beginning of the array.
4. After all passes, the array is arranged from largest to smallest.

This approach is similar to basic sorting (like Bubble/Selection),
but the comparison condition is reversed to achieve descending order.
*/
