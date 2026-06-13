#include <iostream>
using namespace std;

void inputAndDisplayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nThe array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    inputAndDisplayArray(arr, size);
    
    return 0;
}

/*
Logic Explanation:
1. First, the program asks the user for the size of the array.
2. An array of that size is declared.
3. The function `inputAndDisplayArray` is called:
   - It uses a loop to take input for each element of the array.
   - Another loop is used to display all the elements entered.
4. This way, the program successfully inputs and displays the array.
*/