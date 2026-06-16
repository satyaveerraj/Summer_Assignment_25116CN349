#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array (including missing number): ";
    cin >> n;

    int arr[n-1]; 
    cout << "Enter " << n-1 << " elements: ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int i = 0; i < n-1; i++) {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    cout << "Missing number is: " << missingNumber << endl;

    return 0;
}

/*
LOGIC EXPLANATION:
1. If we have numbers from 1 to n, their sum is given by the formula:
       Sum = n * (n + 1) / 2
   Example: For n = 5, numbers are 1+2+3+4+5 = 15.

2. If one number is missing, the sum of the given array will be smaller
   than the expected sum.

3. By subtracting the actual sum of the array from the expected sum,
   we directly get the missing number:
       Missing = ExpectedSum - ActualSum
*/
