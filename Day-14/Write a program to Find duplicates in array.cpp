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

    bool foundDuplicate = false;

    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                foundDuplicate = true;
                break; 
            }
        }
    }

    if (!foundDuplicate) {
        cout << "None";
    }

    cout << endl;
    return 0;
}

/*
LOGIC EXPLANATION:
1. Read the array size and elements from the user.
2. Use two loops:
   - Outer loop picks each element one by one.
   - Inner loop compares it with the remaining elements.
3. If a match is found (arr[i] == arr[j]):
   -> Print that element as a duplicate.
   -> Break inner loop to avoid printing the same duplicate multiple times.
4. If no duplicates are found, print "None".
*/
