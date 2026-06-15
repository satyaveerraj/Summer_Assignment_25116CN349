#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. Save the last element in a temporary variable.
2. Shift each element one position to the right:
   - arr[n-1] becomes arr[n-2], arr[n-2] becomes arr[n-3], and so on.
3. Place the saved last element at the first position.
This effectively rotates the array right by one position.
*/
