#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    unordered_set<int> seen; 
    bool found = false;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (seen.find(complement) != seen.end()) {
            cout << "Pair found: (" << arr[i] << ", " << complement << ")" << endl;
            found = true;
            break; 
        }

        seen.insert(arr[i]);
    }

    if (!found) {
        cout << "No pair found with given sum." << endl;
    }

    return 0;
}

/*
LOGIC EXPLANATION:
1. Read the array and target sum from the user.
2. Use a hash set to keep track of elements we have already seen.
3. For each element 'x' in the array:
       - Calculate its complement: target - x
       - If the complement is already in the set, we found a pair (x, complement).
       - Otherwise, insert 'x' into the set and continue.
4. This approach works in O(n) time because each lookup in the set is O(1) on average.
5. If no pair is found after scanning the array, print "No pair found".
*/
