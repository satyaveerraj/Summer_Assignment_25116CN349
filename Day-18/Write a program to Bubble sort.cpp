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
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Logic Explanation:
Bubble Sort works by repeatedly swapping adjacent elements if they are in the wrong order.
1. In each pass, the largest element "bubbles up" to the end of the array.
2. Outer loop runs (n-1) times because after n-1 passes, the array is sorted.
3. Inner loop compares adjacent elements and swaps them if needed.
4. After the first pass, the largest element is at the last position.
5. After the second pass, the second largest is at the second last position, and so on.
This continues until the array is completely sorted.
*/
