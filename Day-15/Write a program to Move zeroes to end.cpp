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

    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    while (index < n) {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. We keep a variable 'index' to track where the next non-zero element should go.
2. Traverse the array:
   - If the element is non-zero, place it at 'index' and increment 'index'.
3. After placing all non-zero elements, fill the rest of the array with zeroes.
4. This ensures non-zero elements keep their original order, and all zeroes move to the end.
*/
