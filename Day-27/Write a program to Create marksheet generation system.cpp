#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    vector<int> marks;  
    int total;
    double percentage;
    char grade;
};

void calculateResult(Student &s) {
    s.total = 0;
    for (int m : s.marks) {
        s.total += m;
    }
    s.percentage = (double)s.total / s.marks.size();

    if (s.percentage >= 90) s.grade = 'A';
    else if (s.percentage >= 75) s.grade = 'B';
    else if (s.percentage >= 60) s.grade = 'C';
    else if (s.percentage >= 40) s.grade = 'D';
    else s.grade = 'F';
}

void addStudent(vector<Student> &records, int subjects) {
    Student s;
    cout << "Enter Roll Number: ";
    cin >> s.rollNumber;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter marks for " << subjects << " subjects:\n";
    s.marks.resize(subjects);
    for (int i = 0; i < subjects; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }

    calculateResult(s);
    records.push_back(s);
    cout << "Marksheet generated successfully!\n";
}

void displayMarksheet(const vector<Student> &records) {
    if (records.empty()) {
        cout << "No records found.\n";
        return;
    }
    cout << "\n--- Marksheet Records ---\n";
    for (const auto &s : records) {
        cout << "Roll Number: " << s.rollNumber << "\n";
        cout << "Name: " << s.name << "\n";
        cout << "Total Marks: " << s.total << "\n";
        cout << "Percentage: " << s.percentage << "%\n";
        cout << "Grade: " << s.grade << "\n";
        cout << "-------------------------\n";
    }
}

void searchMarksheet(const vector<Student> &records) {
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;

    for (const auto &s : records) {
        if (s.rollNumber == roll) {
            cout << "\nMarksheet Found:\n";
            cout << "Name: " << s.name << "\n";
            cout << "Total Marks: " << s.total << "\n";
            cout << "Percentage: " << s.percentage << "%\n";
            cout << "Grade: " << s.grade << "\n";
            return;
        }
    }
    cout << "No student found with Roll Number " << roll << ".\n";
}

int main() {
    vector<Student> records;
    int choice, subjects;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    do {
        cout << "\n--- Marksheet Generation System ---\n";
        cout << "1. Add Student Marksheet\n";
        cout << "2. Display All Marksheets\n";
        cout << "3. Search Marksheet\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(records, subjects); break;
            case 2: displayMarksheet(records); break;
            case 3: searchMarksheet(records); break;
            case 4: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}

/*
------------------- LOGIC EXPLANATION -------------------
1. A structure 'Student' stores roll number, name, marks, total, percentage, and grade.
2. A vector 'records' is used to hold multiple student marksheets dynamically.
3. calculateResult() → Computes total marks, percentage, and assigns grade.
4. addStudent() → Takes input for student details and marks, then generates marksheet.
5. displayMarksheet() → Iterates through the vector and prints all marksheets.
6. searchMarksheet() → Searches for a student by roll number and shows marksheet.
7. main() → Asks number of subjects, then provides a menu-driven interface to
   repeatedly perform operations until the user chooses to exit.
---------------------------------------------------------
*/
