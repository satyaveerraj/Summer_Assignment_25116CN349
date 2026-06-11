#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  
        }
    }
    return true;  
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. A prime number is greater than 1 and divisible only by 1 and itself.
2. We created a function `isPrime(int n)` that returns true if n is prime, false otherwise.
3. First, we check if n <= 1. If yes, it's not prime.
4. Then we test divisibility from 2 up to sqrt(n). 
   - If n is divisible by any number in this range, it's not prime.
   - Otherwise, it's prime.
5. In `main()`, we take a number from the user and call `isPrime`.
6. Based on the result, we print whether the number is prime or not.
*/