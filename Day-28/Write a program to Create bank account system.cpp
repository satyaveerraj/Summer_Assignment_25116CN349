#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Account {
    int accountNumber;
    string holderName;
    double balance;
};

void createAccount(vector<Account> &accounts) {
    Account a;
    cout << "Enter Account Number: ";
    cin >> a.accountNumber;
    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, a.holderName);
    cout << "Enter Initial Balance: ";
    cin >> a.balance;

    accounts.push_back(a);
    cout << "Account created successfully!\n";
}

void displayAccounts(const vector<Account> &accounts) {
    if (accounts.empty()) {
        cout << "No accounts found.\n";
        return;
    }
    cout << "\n--- Bank Accounts ---\n";
    for (const auto &a : accounts) {
        cout << "Account Number: " << a.accountNumber << "\n";
        cout << "Holder Name: " << a.holderName << "\n";
        cout << "Balance: " << a.balance << "\n";
        cout << "-------------------------\n";
    }
}

void depositMoney(vector<Account> &accounts) {
    int accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    for (auto &a : accounts) {
        if (a.accountNumber == accNo) {
            a.balance += amount;
            cout << "Deposit successful! New Balance: " << a.balance << "\n";
            return;
        }
    }
    cout << "Account not found.\n";
}

void withdrawMoney(vector<Account> &accounts) {
    int accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    for (auto &a : accounts) {
        if (a.accountNumber == accNo) {
            if (amount <= a.balance) {
                a.balance -= amount;
                cout << "Withdrawal successful! New Balance: " << a.balance << "\n";
            } else {
                cout << "Insufficient balance.\n";
            }
            return;
        }
    }
    cout << "Account not found.\n";
}

void deleteAccount(vector<Account> &accounts) {
    int accNo;
    cout << "Enter Account Number to delete: ";
    cin >> accNo;

    for (auto it = accounts.begin(); it != accounts.end(); ++it) {
        if (it->accountNumber == accNo) {
            accounts.erase(it);
            cout << "Account deleted successfully!\n";
            return;
        }
    }
    cout << "Account not found.\n";
}

int main() {
    vector<Account> accounts;
    int choice;

    do {
        cout << "\n--- Bank Account Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Delete Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(accounts); break;
            case 2: displayAccounts(accounts); break;
            case 3: depositMoney(accounts); break;
            case 4: withdrawMoney(accounts); break;
            case 5: deleteAccount(accounts); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

/*
LOGIC EXPLANATION 
1. A structure 'Account' stores account number, holder name, and balance.
2. A vector 'accounts' is used to hold multiple bank accounts dynamically.
3. createAccount() → Adds a new account with initial balance.
4. displayAccounts() → Shows all accounts with details.
5. depositMoney() → Adds money to an account if found.
6. withdrawMoney() → Deducts money if sufficient balance exists.
7. deleteAccount() → Removes an account by account number.
8. main() → Provides a menu-driven interface to repeatedly perform operations
   until the user chooses to exit.
*/
