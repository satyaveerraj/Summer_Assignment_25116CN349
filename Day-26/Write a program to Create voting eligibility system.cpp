#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are NOT eligible to vote." << endl;
        cout << "You will be eligible after " << (18 - age) << " year(s)." << endl;
    }

    return 0;
}

/*
Logic Explanation:
1. Read the age of the person.
2. If age >= 18, print "eligible to vote".
3. Otherwise, print "not eligible" and show how many years remain until eligibility.
Result: The program determines voting eligibility based on age.
*/
