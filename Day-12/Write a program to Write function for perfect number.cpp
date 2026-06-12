#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;   
        }
    }

    return (sum == num);  
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfect(number)) {
        cout << number << " is a Perfect Number." << endl;
    } else {
        cout << number << " is not a Perfect Number." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. A Perfect Number is a number that equals the sum of its proper divisors
   (excluding itself).

   Example: 28
   Divisors: 1, 2, 4, 7, 14
   Sum = 1 + 2 + 4 + 7 + 14 = 28
   Since sum == original → Perfect Number.

2. Steps in the program:
   - Loop from 1 to num/2 (no need to check beyond half).
   - If num % i == 0 → i is a divisor.
   - Add all divisors to sum.
   - Compare sum with the original number.
   - If equal → Perfect Number, else not.
*/