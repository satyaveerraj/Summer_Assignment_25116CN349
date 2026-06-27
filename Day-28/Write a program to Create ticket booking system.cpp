#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Ticket {
    int ticketID;
    string passengerName;
    string destination;
    bool booked;
};

void bookTicket(vector<Ticket> &tickets) {
    Ticket t;
    cout << "Enter Ticket ID: ";
    cin >> t.ticketID;
    cin.ignore();
    cout << "Enter Passenger Name: ";
    getline(cin, t.passengerName);
    cout << "Enter Destination: ";
    getline(cin, t.destination);
    t.booked = true;

    tickets.push_back(t);
    cout << "Ticket booked successfully!\n";
}

void displayTickets(const vector<Ticket> &tickets) {
    if (tickets.empty()) {
        cout << "No tickets booked.\n";
        return;
    }
    cout << "\n--- Ticket Records ---\n";
    for (const auto &t : tickets) {
        cout << "Ticket ID: " << t.ticketID << "\n";
        cout << "Passenger Name: " << t.passengerName << "\n";
        cout << "Destination: " << t.destination << "\n";
        cout << "Status: " << (t.booked ? "Booked" : "Cancelled") << "\n";
        cout << "-------------------------\n";
    }
}

void searchTicket(const vector<Ticket> &tickets) {
    int id;
    cout << "Enter Ticket ID to search: ";
    cin >> id;

    for (const auto &t : tickets) {
        if (t.ticketID == id) {
            cout << "\nTicket Found:\n";
            cout << "Passenger Name: " << t.passengerName << "\n";
            cout << "Destination: " << t.destination << "\n";
            cout << "Status: " << (t.booked ? "Booked" : "Cancelled") << "\n";
            return;
        }
    }
    cout << "No ticket found with ID " << id << ".\n";
}

void cancelTicket(vector<Ticket> &tickets) {
    int id;
    cout << "Enter Ticket ID to cancel: ";
    cin >> id;

    for (auto &t : tickets) {
        if (t.ticketID == id) {
            if (!t.booked) {
                cout << "Ticket is already cancelled.\n";
            } else {
                t.booked = false;
                cout << "Ticket cancelled successfully!\n";
            }
            return;
        }
    }
    cout << "No ticket found with ID " << id << ".\n";
}

int main() {
    vector<Ticket> tickets;
    int choice;

    do {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display All Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: bookTicket(tickets); break;
            case 2: displayTickets(tickets); break;
            case 3: searchTicket(tickets); break;
            case 4: cancelTicket(tickets); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

/*
 LOGIC EXPLANATION 
1. A structure 'Ticket' stores ticket ID, passenger name, destination, and status.
2. A vector 'tickets' is used to hold multiple ticket records dynamically.
3. bookTicket() → Adds a new ticket with passenger details and marks it booked.
4. displayTickets() → Shows all tickets with their details and booking status.
5. searchTicket() → Searches for a ticket by ID and displays details.
6. cancelTicket() → Cancels a ticket by ID if it was booked.
7. main() → Provides a menu-driven interface to repeatedly perform operations
   until the user chooses to exit.
*/
