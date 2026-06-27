#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basicSalary;
    double hra;  
    double da;  
    double deductions;
};

void addEmployee(vector<Employee> &records) {
    Employee e;
    cout << "Enter Employee ID: ";
    cin >> e.id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, e.name);
    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;
    cout << "Enter HRA: ";
    cin >> e.hra;
    cout << "Enter DA: ";
    cin >> e.da;
    cout << "Enter Deductions: ";
    cin >> e.deductions;

    records.push_back(e);
    cout << "Employee salary record added successfully!\n";
}

double calculateNetSalary(const Employee &e) {
    return e.basicSalary + e.hra + e.da - e.deductions;
}

void displaySalaries(const vector<Employee> &records) {
    if (records.empty()) {
        cout << "No salary records found.\n";
        return;
    }
    cout << "\n--- Salary Records ---\n";
    for (const auto &e : records) {
        cout << "ID: " << e.id << "\n";
        cout << "Name: " << e.name << "\n";
        cout << "Basic Salary: " << e.basicSalary << "\n";
        cout << "HRA: " << e.hra << "\n";
        cout << "DA: " << e.da << "\n";
        cout << "Deductions: " << e.deductions << "\n";
        cout << "Net Salary: " << calculateNetSalary(e) << "\n";
        cout << "-------------------------\n";
    }
}

void searchSalary(const vector<Employee> &records) {
    int id;
    cout << "Enter Employee ID to search: ";
    cin >> id;

    for (const auto &e : records) {
        if (e.id == id) {
            cout << "\nSalary Record Found:\n";
            cout << "Name: " << e.name << "\n";
            cout << "Basic Salary: " << e.basicSalary << "\n";
            cout << "HRA: " << e.hra << "\n";
            cout << "DA: " << e.da << "\n";
            cout << "Deductions: " << e.deductions << "\n";
            cout << "Net Salary: " << calculateNetSalary(e) << "\n";
            return;
        }
    }
    cout << "No employee found with ID " << id << ".\n";
}

void deleteSalary(vector<Employee> &records) {
    int id;
    cout << "Enter Employee ID to delete: ";
    cin >> id;

    for (auto it = records.begin(); it != records.end(); ++it) {
        if (it->id == id) {
            records.erase(it);
            cout << "Salary record deleted successfully!\n";
            return;
        }
    }
    cout << "No employee found with ID " << id << ".\n";
}

int main() {
    vector<Employee> records;
    int choice;

    do {
        cout << "\n--- Salary Management System ---\n";
        cout << "1. Add Employee Salary Record\n";
        cout << "2. Display All Salary Records\n";
        cout << "3. Search Salary Record\n";
        cout << "4. Delete Salary Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addEmployee(records); break;
            case 2: displaySalaries(records); break;
            case 3: searchSalary(records); break;
            case 4: deleteSalary(records); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

/*
------------------- LOGIC EXPLANATION -------------------
1. A structure 'Employee' stores ID, name, basic salary, HRA, DA, and deductions.
2. A vector 'records' is used to hold multiple employee salary entries dynamically.
3. addEmployee() → Takes input and adds a new salary record.
4. calculateNetSalary() → Computes net salary = basic + HRA + DA - deductions.
5. displaySalaries() → Iterates through the vector and prints all salary slips.
6. searchSalary() → Searches for an employee by ID and shows salary details.
7. deleteSalary() → Finds an employee by ID and removes the record.
8. main() → Provides a menu-driven interface to repeatedly perform operations
   until the user chooses to exit.
---------------------------------------------------------
*/
