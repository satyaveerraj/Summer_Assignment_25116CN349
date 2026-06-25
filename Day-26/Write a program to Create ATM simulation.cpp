#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0; 
    double amount;

    cout << "===== ATM Simulation =====\n";

    do {
        cout << "\n1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    cout << "Invalid withdrawal amount.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

/*
Logic Explanation:
1. Start with an initial balance (e.g., $1000).
2. Show a menu with options: Check Balance, Deposit, Withdraw, Exit.
3. Use a loop to keep showing the menu until the user chooses Exit.
4. For deposit: add the entered amount to balance if valid.
5. For withdrawal: subtract the amount if it’s valid and not greater than balance.
6. For balance: simply display the current balance.
7. Exit ends the program.
*/
