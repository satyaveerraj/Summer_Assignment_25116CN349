#include <iostream>
using namespace std;

int main() {
    int num, product = 1;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;   
        product *= digit;           
        num /= 10;                  
    }

    cout << "Product of digits = " << product << endl;
    return 0;
}