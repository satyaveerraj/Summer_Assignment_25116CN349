#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b) {
        return a;  
    } else {
        return b;  
    }
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int result = findMax(num1, num2);
    cout << "The maximum is: " << result << endl;

    return 0;
}

/*
Logic Explanation:
1. We created a function `findMax(int a, int b)` which takes two integers as input.
2. Inside the function, we compare the two numbers using the `>` operator.
3. If `a` is greater than `b`, we return `a`.
4. Otherwise, we return `b`.
5. In `main()`, we take two numbers from the user.
6. We call the `findMax` function with these numbers and store the result.
7. Finally, we print the maximum value on the screen.
*/