#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;  
        }
        else {
            high = mid - 1; 
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

/*
Logic Explanation:
Binary Search is used to find an element in a sorted array efficiently.

1. Start with two pointers: low (beginning) and high (end).
2. Find the middle index: mid = (low + high) / 2.
3. Compare the middle element with the key:
   - If arr[mid] == key → element found.
   - If arr[mid] < key → search in the right half (low = mid + 1).
   - If arr[mid] > key → search in the left half (high = mid - 1).
4. Repeat until low > high (search space is empty).
5. If not found, the element does not exist in the array.

Binary Search reduces the search space by half in each step,
making it much faster than Linear Search for large sorted arrays.
Time Complexity: O(log n).
*/
