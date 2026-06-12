#include <iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1;   
    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << first << " ";        
        int next = first + second;     
        first = second;                
        second = next;                 
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    fibonacci(terms);

    return 0;
}

/*
Logic Explanation:
1. Fibonacci series starts with 0 and 1.
2. Each next term is the sum of the previous two terms.
   Formula: F(n) = F(n-1) + F(n-2)
3. In the program:
   - We initialize first = 0 and second = 1.
   - Loop runs 'n' times to print terms.
   - Each iteration:
       a) Print the current term (first).
       b) Calculate next = first + second.
       c) Update first = second, second = next.
4. This way, the series is generated step by step.

Example: For n = 6
Series → 0, 1, 1, 2, 3, 5
*/