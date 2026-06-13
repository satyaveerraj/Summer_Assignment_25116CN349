#include <iostream>
using namespace std;

int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    return sum;
}

double findAverage(int arr[], int size) {
    int sum = findSum(arr, size); 
    return (double)sum / size;    
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

    int sum = findSum(arr, size);
    double average = findAverage(arr, size);

    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}

/*
Logic Explanation:
1. The program first asks the user for the size of the array.
2. An array of that size is declared, and elements are input using a loop.
3. The function `findSum` adds all elements together using a loop.
4. The function `findAverage` reuses the sum and divides it by the number of elements.
5. Finally, the program prints both the sum and the average.
*/
