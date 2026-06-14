#include <iostream>
using namespace std;

int frequency(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
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

    cout << "Enter element to find frequency: ";
    cin >> key;

    int result = frequency(arr, n, key);

    if (result > 0) {
        cout << "Frequency of " << key << " is " << result << endl;
    } else {
        cout << key << " does not exist in the array." << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. Frequency means how many times a particular element appears in the array.
2. We loop through the array from index 0 to n-1.
3. Each time the current element matches the key, we increase a counter.
4. After the loop ends, the counter holds the total frequency.
5. If the counter is zero, it means the element does not exist in the array.
*/
