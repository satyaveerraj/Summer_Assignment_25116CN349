#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1e9; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1e9) {
        cout << "No second largest element (all elements are equal)." << endl;
    } else {
        cout << "Second largest element is: " << secondLargest << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. We first assume the first element is the largest.
2. We keep another variable 'secondLargest' initialized to a very small value.
3. As we traverse the array:
   - If the current element is greater than 'largest':
       -> Update 'secondLargest' with the old 'largest'
       -> Update 'largest' with the current element
   - Else if the current element is smaller than 'largest' but greater than 'secondLargest':
       -> Update 'secondLargest' with the current element
4. At the end, 'secondLargest' holds the second largest value.
5. If all elements are equal, 'secondLargest' never updates, so we print a message.
*/
