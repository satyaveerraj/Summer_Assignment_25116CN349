#include <iostream>
using namespace std;

int findSum(int a, int b) {
    return a + b; 
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int result = findSum(num1, num2);
    cout << "The sum is: " << result << endl;

    return 0;
}

/*
Logic Explanation:
1. We created a function `findSum(int a, int b)` which takes two integers as input.
2. Inside the function, we simply add the two numbers using the `+` operator.
3. The result of addition is returned back to the caller.
4. In `main()`, we take two numbers from the user.
5. We call the `findSum` function with these numbers and store the result.
6. Finally, we print the sum on the screen.
*/