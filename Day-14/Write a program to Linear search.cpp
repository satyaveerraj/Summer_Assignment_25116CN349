#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. Linear search works by checking each element of the array one by one.
2. We loop from index 0 to n-1.
3. If the current element matches the key, we return its index.
4. If no match is found after checking all elements, we return -1.
5. This method is simple but not efficient for large arrays, 
   because it checks every element until the key is found or the array ends.
*/
