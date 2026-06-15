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

    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. We take input for the array size and elements.
2. To reverse, we use two pointers:
   - 'start' begins at index 0.
   - 'end' begins at index n-1.
3. Swap the elements at 'start' and 'end'.
4. Move 'start' forward and 'end' backward.
5. Repeat until start >= end.
This way, the array is reversed in place without using extra memory.
*/
