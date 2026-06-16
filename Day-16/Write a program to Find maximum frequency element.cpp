#include <iostream>
#include <unordered_map>
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

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElement = arr[0];
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }

    cout << "Element with maximum frequency is: " << maxElement 
         << " (appears " << maxFreq << " times)" << endl;

    return 0;
}

/*
LOGIC EXPLANATION:
1. We use a hash map (unordered_map) to store frequency counts:
       - Key = element
       - Value = number of times it appears

2. Traverse the array and increment the count for each element.

3. After counting, traverse the map:
       - Keep track of the highest frequency seen so far.
       - Update the element whenever a higher frequency is found.

4. Finally, print the element with the maximum frequency and how many times it appears.
*/
