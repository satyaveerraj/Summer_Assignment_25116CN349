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
        int minIndex = i;  
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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
Selection Sort works by repeatedly finding the smallest element from the unsorted part
and placing it at the beginning.

1. Start with the first element, assume it is the smallest.
2. Compare it with the rest of the array to find the actual smallest element.
3. Swap the smallest element with the first element.
4. Move to the next position and repeat the process for the remaining unsorted part.
5. Continue until the entire array is sorted.

In each pass, one element is placed in its correct position.
This makes Selection Sort easy to understand but not the most efficient for large datasets.
*/
