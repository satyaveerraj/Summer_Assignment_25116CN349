#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int binary[32]; 
    int index = 0;

    while (num > 0) {
        binary[index] = num % 2; 
        num = num / 2;           
        index++;
    }

    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}