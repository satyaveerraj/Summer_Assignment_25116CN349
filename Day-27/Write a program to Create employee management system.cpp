#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    string department;
    double salary;
};

void addEmployee(vector<Employee> &records) {
    Employee e;
    cout << "Enter Employee ID: ";
    cin >> e.id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, e.name);
    cout << "Enter Age: ";
    cin >> e.age;
    cin.ignore();
    cout << "Enter Department: ";
    getline(cin, e.department);
    cout << "Enter Salary: ";
    cin >> e.salary;

    records.push_back(e);
    cout << "Employee added successfully!\n";
}

void displayEmployees(const vector<Employee> &records) {
    if (records.empty()) {
        cout << "No employee records found.\n";
        return;
    }
    cout << "\n--- Employee Records ---\n";
    for (const auto &e : records) {
        cout << "ID: " << e.id << "\n";
        cout << "Name: " << e.name << "\n";
        cout << "Age: " << e.age << "\n";
        cout << "Department: " << e.department << "\n";
        cout << "Salary: " << e.salary << "\n";
        cout << "-------------------------\n";
    }
}

void searchEmployee(const vector<Employee> &records) {
    int id;
    cout << "Enter Employee ID to search: ";
    cin >> id;

    for (const auto &e : records) {
        if (e.id == id) {
            cout << "\nRecord Found:\n";
            cout << "Name: " << e.name << "\n";
            cout << "Age: " << e.age << "\n";
            cout << "Department: " << e.department << "\n";
            cout << "Salary: " << e.salary << "\n";
            return;
        }
    }
    cout << "No employee found with ID " << id << ".\n";
}

void deleteEmployee(vector<Employee> &records) {
    int id;
    cout << "Enter Employee ID to delete: ";
    cin >> id;

    for (auto it = records.begin(); it != records.end(); ++it) {
        if (it->id == id) {
            records.erase(it);
            cout << "Employee record deleted successfully!\n";
            return;
        }
    }
    cout << "No employee found with ID " << id << ".\n";
}

int main() {
    vector<Employee> records;
    int choice;

    do {
        cout << "\n--- Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addEmployee(records); break;
            case 2: displayEmployees(records); break;
            case 3: searchEmployee(records); break;
            case 4: deleteEmployee(records); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

/*
------------------- LOGIC EXPLANATION -------------------
1. A structure 'Employee' stores ID, name, age, department, and salary.
2. A vector 'records' is used to hold multiple employee entries dynamically.
3. addEmployee() → Takes input and adds a new employee to the vector.
4. displayEmployees() → Iterates through the vector and prints all records.
5. searchEmployee() → Searches for an employee by ID and displays details.
6. deleteEmployee() → Finds an employee by ID and removes the record.
7. main() → Provides a menu-driven interface to repeatedly perform operations
   until the user chooses to exit.
---------------------------------------------------------
*/
