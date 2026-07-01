#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
    string course;
};

void addStudent(Student students[], int &count);
void displayStudents(Student students[], int count);
void searchStudent(Student students[], int count);
void updateStudent(Student students[], int count);
void deleteStudent(Student students[], int &count);

int main() {
    Student students[100];  
    int count = 0;          
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Update Student Record\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(students, count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: updateStudent(students, count); break;
            case 5: deleteStudent(students, count); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

void addStudent(Student students[], int &count) {
    cout << "Enter Roll No: ";
    cin >> students[count].rollNo;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, students[count].name);
    cout << "Enter Age: ";
    cin >> students[count].age;
    cout << "Enter Course: ";
    cin.ignore();
    getline(cin, students[count].course);
    count++;
    cout << "Student added successfully!\n";
}

void displayStudents(Student students[], int count) {
    cout << "\n--- Student List ---\n";
    for (int i = 0; i < count; i++) {
        cout << "Roll No: " << students[i].rollNo
             << ", Name: " << students[i].name
             << ", Age: " << students[i].age
             << ", Course: " << students[i].course << endl;
    }
}

void searchStudent(Student students[], int count) {
    int searchRoll;
    cout << "Enter Roll No to search: ";
    cin >> searchRoll;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == searchRoll) {
            cout << "Found -> Roll No: " << students[i].rollNo
                 << ", Name: " << students[i].name
                 << ", Age: " << students[i].age
                 << ", Course: " << students[i].course << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Student not found!\n";
}

void updateStudent(Student students[], int count) {
    int updateRoll;
    cout << "Enter Roll No to update: ";
    cin >> updateRoll;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == updateRoll) {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Enter new age: ";
            cin >> students[i].age;
            cout << "Enter new course: ";
            cin.ignore();
            getline(cin, students[i].course);
            cout << "Record updated successfully!\n";
            found = true;
            break;
        }
    }
    if (!found) cout << "Student not found!\n";
}

void deleteStudent(Student students[], int &count) {
    int deleteRoll;
    cout << "Enter Roll No to delete: ";
    cin >> deleteRoll;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == deleteRoll) {
            // shift elements left
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            cout << "Record deleted successfully!\n";
            found = true;
            break;
        }
    }
    if (!found) cout << "Student not found!\n";
}

/*
Logic Explanation
1. A struct 'Student' stores roll number, name, age, and course.
2. An array 'students' holds up to 100 records, with 'count' tracking how many are stored.
3. Functions are used to modularize tasks:
   - addStudent(): Adds a new student record.
   - displayStudents(): Shows all student records.
   - searchStudent(): Finds a student by roll number.
   - updateStudent(): Updates student details if roll number matches.
   - deleteStudent(): Deletes a student record by shifting elements left.
4. The main() function uses a do-while loop with a menu and switch-case to call these functions.
5. Program runs until user selects Exit.
*/
