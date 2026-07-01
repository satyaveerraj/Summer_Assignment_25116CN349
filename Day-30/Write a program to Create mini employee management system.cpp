#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    string department;
    double salary;
};

int main() {
    Employee employees[100];  
    int count = 0;            
    int choice;

    do {
        cout << "\n--- Mini Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Update Employee Record\n";
        cout << "5. Delete Employee Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter Employee ID: ";
                cin >> employees[count].id;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, employees[count].name);
                cout << "Enter Age: ";
                cin >> employees[count].age;
                cout << "Enter Department: ";
                cin.ignore();
                getline(cin, employees[count].department);
                cout << "Enter Salary: ";
                cin >> employees[count].salary;
                count++;
                cout << "Employee added successfully!\n";
                break;
            }

            case 2: {
                cout << "\n--- Employee List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << employees[i].id
                         << ", Name: " << employees[i].name
                         << ", Age: " << employees[i].age
                         << ", Department: " << employees[i].department
                         << ", Salary: " << employees[i].salary << endl;
                }
                break;
            }

            case 3: {
                int searchId;
                cout << "Enter Employee ID to search: ";
                cin >> searchId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == searchId) {
                        cout << "Found -> ID: " << employees[i].id
                             << ", Name: " << employees[i].name
                             << ", Age: " << employees[i].age
                             << ", Department: " << employees[i].department
                             << ", Salary: " << employees[i].salary << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee not found!\n";
                break;
            }

            case 4: {
                int updateId;
                cout << "Enter Employee ID to update: ";
                cin >> updateId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == updateId) {
                        cout << "Enter new name: ";
                        cin.ignore();
                        getline(cin, employees[i].name);
                        cout << "Enter new age: ";
                        cin >> employees[i].age;
                        cout << "Enter new department: ";
                        cin.ignore();
                        getline(cin, employees[i].department);
                        cout << "Enter new salary: ";
                        cin >> employees[i].salary;
                        cout << "Record updated successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee not found!\n";
                break;
            }

            case 5: {
                int deleteId;
                cout << "Enter Employee ID to delete: ";
                cin >> deleteId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == deleteId) {
                        for (int j = i; j < count - 1; j++) {
                            employees[j] = employees[j + 1];
                        }
                        count--;
                        cout << "Record deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee not found!\n";
                break;
            }

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

/*
Logic Explanation
1. A struct 'Employee' stores ID, name, age, department, and salary.
2. An array 'employees' holds up to 100 records, with 'count' tracking how many are stored.
3. A do-while loop shows the menu until the user chooses Exit.
4. Switch-case handles operations:
   - Case 1: Add new employee record.
   - Case 2: Display all employee records.
   - Case 3: Search employee by ID using linear search.
   - Case 4: Update employee details if ID matches.
   - Case 5: Delete employee record by shifting elements left.
   - Case 6: Exit program.
5. Default case handles invalid input.
*/
