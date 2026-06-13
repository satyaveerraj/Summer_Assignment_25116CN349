#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int largest = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; 
        }
    }
    return largest;
}

int findSmallest(int arr[], int size) {
    int smallest = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; 
        }
    }
    return smallest;
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

    int largest = findLargest(arr, size);
    int smallest = findSmallest(arr, size);

    cout << "\nLargest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}

/*
Logic Explanation:
1. The program first asks the user for the size of the array.
2. An array of that size is declared, and elements are input using a loop.
3. The function `findLargest`:
   - Starts by assuming the first element is the largest.
   - Compares each element with the current largest and updates if a bigger one is found.
4. The function `findSmallest`:
   - Starts by assuming the first element is the smallest.
   - Compares each element with the current smallest and updates if a smaller one is found.
5. Finally, the program prints both the largest and smallest elements.
*/
