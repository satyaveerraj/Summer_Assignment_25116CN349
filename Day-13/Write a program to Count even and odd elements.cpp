#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size) {
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;  
        }
    }

    cout << "\nNumber of even elements = " << evenCount << endl;
    cout << "Number of odd elements = " << oddCount << endl;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; 

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    countEvenOdd(arr, size);

    return 0;
}

/*
Logic Explanation:
1. The program first asks the user for the size of the array.
2. An array of that size is declared, and elements are input using a loop.
3. The function `countEvenOdd`:
   - Initializes counters for even and odd numbers.
   - Uses a loop to check each element:
       - If divisible by 2, it is even → increment evenCount.
       - Otherwise, it is odd → increment oddCount.
4. Finally, the program prints the total count of even and odd elements.
*/

