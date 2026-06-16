#include <iostream>
#include <unordered_set>
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

    unordered_set<int> uniqueElements; 

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            cout << arr[i] << " ";
            uniqueElements.insert(arr[i]);
        }
    }

    cout << endl;
    return 0;
}

/*
LOGIC EXPLANATION:
1. Read the array elements from the user.
2. Use a hash set (unordered_set) to keep track of unique elements.
   - A set automatically ignores duplicates because it only stores unique values.
3. Traverse the array:
   - If the element is not in the set, print it and insert it into the set.
   - If it is already in the set, skip it (duplicate).
4. This way, only the first occurrence of each element is printed,
   and duplicates are removed
*/