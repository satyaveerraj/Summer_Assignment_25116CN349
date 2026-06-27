#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    int age;
    string course;
};

void addStudent(vector<Student> &records) {
    Student s;
    cout << "Enter Roll Number: ";
    cin >> s.rollNumber;
    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, s.name);
    cout << "Enter Age: ";
    cin >> s.age;
    cin.ignore();
    cout << "Enter Course: ";
    getline(cin, s.course);

    records.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents(const vector<Student> &records) {
    if (records.empty()) {
        cout << "No records found.\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    for (const auto &s : records) {
        cout << "Roll Number: " << s.rollNumber << "\n";
        cout << "Name: " << s.name << "\n";
        cout << "Age: " << s.age << "\n";
        cout << "Course: " << s.course << "\n";
        cout << "-----------------------\n";
    }
}

void searchStudent(const vector<Student> &records) {
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;

    for (const auto &s : records) {
        if (s.rollNumber == roll) {
            cout << "\nRecord Found:\n";
            cout << "Name: " << s.name << "\n";
            cout << "Age: " << s.age << "\n";
            cout << "Course: " << s.course << "\n";
            return;
        }
    }
    cout << "No student found with Roll Number " << roll << ".\n";
}

void deleteStudent(vector<Student> &records) {
    int roll;
    cout << "Enter Roll Number to delete: ";
    cin >> roll;

    for (auto it = records.begin(); it != records.end(); ++it) {
        if (it->rollNumber == roll) {
            records.erase(it);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "No student found with Roll Number " << roll << ".\n";
}

int main() {
    vector<Student> records;
    int choice;

    do {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(records); break;
            case 2: displayStudents(records); break;
            case 3: searchStudent(records); break;
            case 4: deleteStudent(records); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

/*
------------------- LOGIC EXPLANATION -------------------
1. A structure 'Student' stores roll number, name, age, and course.
2. A vector 'records' is used to hold multiple student entries dynamically.
3. addStudent() → Takes input and adds a new student to the vector.
4. displayStudents() → Iterates through the vector and prints all records.
5. searchStudent() → Searches for a student by roll number and displays details.
6. deleteStudent() → Finds a student by roll number and removes the record.
7. main() → Provides a menu-driven interface to repeatedly perform operations
   until the user chooses to exit.
---------------------------------------------------------
*/
