#include <iostream>
#include <cmath>  
using namespace std;

bool isArmstrong(int num) {
    int original = num;   
    int sum = 0;          

    int digits = 0;
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original); 
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. An Armstrong number is a number that equals the sum of its own digits
   each raised to the power of the number of digits.

   Example: 153
   Digits: 1, 5, 3
   Number of digits = 3
   Calculation: 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
   Since sum == original → Armstrong.

2. Steps in the program:
   - Count the number of digits in the number.
   - Extract each digit using % 10.
   - Raise each digit to the power of total digits using pow().
   - Add them together.
   - Compare the sum with the original number.
   - If equal → Armstrong, else not.
*/
