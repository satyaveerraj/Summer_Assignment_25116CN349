#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;   
};

int main() {
    Book library[100];  
    int count = 0;       
    int choice;

    do {
        cout << "\n--- Mini Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Delete Book\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter Book ID: ";
                cin >> library[count].id;
                cout << "Enter Title: ";
                cin.ignore();
                getline(cin, library[count].title);
                cout << "Enter Author: ";
                getline(cin, library[count].author);
                library[count].issued = false;
                count++;
                cout << "Book added successfully!\n";
                break;
            }

            case 2: {
                cout << "\n--- Book List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << library[i].id
                         << ", Title: " << library[i].title
                         << ", Author: " << library[i].author
                         << ", Status: " << (library[i].issued ? "Issued" : "Available") << endl;
                }
                break;
            }

            case 3: {
                int searchId;
                cout << "Enter Book ID to search: ";
                cin >> searchId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (library[i].id == searchId) {
                        cout << "Found -> ID: " << library[i].id
                             << ", Title: " << library[i].title
                             << ", Author: " << library[i].author
                             << ", Status: " << (library[i].issued ? "Issued" : "Available") << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found!\n";
                break;
            }

            case 4: {
                int issueId;
                cout << "Enter Book ID to issue: ";
                cin >> issueId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (library[i].id == issueId) {
                        if (!library[i].issued) {
                            library[i].issued = true;
                            cout << "Book issued successfully!\n";
                        } else {
                            cout << "Book is already issued!\n";
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found!\n";
                break;
            }

            case 5: {
                int returnId;
                cout << "Enter Book ID to return: ";
                cin >> returnId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (library[i].id == returnId) {
                        if (library[i].issued) {
                            library[i].issued = false;
                            cout << "Book returned successfully!\n";
                        } else {
                            cout << "Book was not issued!\n";
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found!\n";
                break;
            }

            case 6: {
                int deleteId;
                cout << "Enter Book ID to delete: ";
                cin >> deleteId;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (library[i].id == deleteId) {
                        for (int j = i; j < count - 1; j++) {
                            library[j] = library[j + 1];
                        }
                        count--;
                        cout << "Book deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found!\n";
                break;
            }

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}

/*
Logic Explanation
1. A struct 'Book' stores ID, title, author, and issued status.
2. An array 'library' holds up to 100 books, with 'count' tracking how many are stored.
3. A do-while loop shows the menu until the user chooses Exit.
4. Switch-case handles operations:
   - Case 1: Add new book details.
   - Case 2: Display all books with their status.
   - Case 3: Search book by ID using linear search.
   - Case 4: Issue book (mark as issued if available).
   - Case 5: Return book (mark as available if issued).
   - Case 6: Delete book by shifting elements left.
   - Case 7: Exit program.
5. Default case handles invalid input.
*/
