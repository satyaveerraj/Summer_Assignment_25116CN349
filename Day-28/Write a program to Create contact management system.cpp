#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
    string email;
};

void addContact(vector<Contact> &contacts) {
    Contact c;
    cout << "Enter Contact ID: ";
    cin >> c.id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, c.name);
    cout << "Enter Phone Number: ";
    getline(cin, c.phone);
    cout << "Enter Email: ";
    getline(cin, c.email);

    contacts.push_back(c);
    cout << "Contact added successfully!\n";
}

void displayContacts(const vector<Contact> &contacts) {
    if (contacts.empty()) {
        cout << "No contacts found.\n";
        return;
    }
    cout << "\n--- Contact Records ---\n";
    for (const auto &c : contacts) {
        cout << "ID: " << c.id << "\n";
        cout << "Name: " << c.name << "\n";
        cout << "Phone: " << c.phone << "\n";
        cout << "Email: " << c.email << "\n";
        cout << "-------------------------\n";
    }
}

void searchContact(const vector<Contact> &contacts) {
    string phone;
    cout << "Enter Phone Number to search: ";
    cin.ignore();
    getline(cin, phone);

    for (const auto &c : contacts) {
        if (c.phone == phone) {
            cout << "\nContact Found:\n";
            cout << "Name: " << c.name << "\n";
            cout << "Email: " << c.email << "\n";
            return;
        }
    }
    cout << "No contact found with phone number " << phone << ".\n";
}

void updateContact(vector<Contact> &contacts) {
    int id;
    cout << "Enter Contact ID to update: ";
    cin >> id;
    cin.ignore();

    for (auto &c : contacts) {
        if (c.id == id) {
            cout << "Enter New Name: ";
            getline(cin, c.name);
            cout << "Enter New Phone Number: ";
            getline(cin, c.phone);
            cout << "Enter New Email: ";
            getline(cin, c.email);
            cout << "Contact updated successfully!\n";
            return;
        }
    }
    cout << "No contact found with ID " << id << ".\n";
}

void deleteContact(vector<Contact> &contacts) {
    int id;
    cout << "Enter Contact ID to delete: ";
    cin >> id;

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->id == id) {
            contacts.erase(it);
            cout << "Contact deleted successfully!\n";
            return;
        }
    }
    cout << "No contact found with ID " << id << ".\n";
}

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addContact(contacts); break;
            case 2: displayContacts(contacts); break;
            case 3: searchContact(contacts); break;
            case 4: updateContact(contacts); break;
            case 5: deleteContact(contacts); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

/*
LOGIC EXPLANATION 
1. A structure 'Contact' stores ID, name, phone number, and email.
2. A vector 'contacts' is used to hold multiple contact records dynamically.
3. addContact() → Adds a new contact with details.
4. displayContacts() → Shows all contacts with their information.
5. searchContact() → Searches for a contact by phone number.
6. updateContact() → Updates an existing contact by ID.
7. deleteContact() → Removes a contact record by ID.
8. main() → Provides a menu-driven interface to repeatedly perform operations
   until the user chooses to exit.
*/
