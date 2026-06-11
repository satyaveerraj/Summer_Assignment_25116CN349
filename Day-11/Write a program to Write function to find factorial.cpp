#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int fact = factorial(num);
    cout << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}

/*
Logic Explanation:
1. Factorial of a number n (written as n!) means multiplying all numbers from 1 up to n.
   Example: 5! = 1 × 2 × 3 × 4 × 5 = 120
2. We created a function `factorial(int n)` that calculates factorial.
3. Inside the function, we start with result = 1.
4. Using a loop, we multiply result by each number from 1 to n.
5. After the loop finishes, result holds the factorial value.
6. In `main()`, we take a number from the user, call the function, and print the factorial.
*/