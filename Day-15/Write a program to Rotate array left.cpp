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

    int first = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. Save the first element in a temporary variable.
2. Shift each element one position to the left:
   - arr[0] becomes arr[1], arr[1] becomes arr[2], and so on.
3. Place the saved first element at the last position.
This effectively rotates the array left by one position.
*/
