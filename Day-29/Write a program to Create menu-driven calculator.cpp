#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n--- Menu Driven Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "Result = " << (num1 - num2) << endl;
                break;
            case 3:
                cout << "Result = " << (num1 * num2) << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result = " << (num1 / num2) << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

/*
Logic Explanation
1. A do-while loop is used so the menu keeps showing until the user chooses Exit (option 5).
2. The user enters a choice (1–5).
3. If the choice is between 1 and 4, the program asks for two numbers.
4. A switch-case structure performs the selected operation:
   - Case 1: Addition
   - Case 2: Subtraction
   - Case 3: Multiplication
   - Case 4: Division (with check to avoid division by zero)
   - Case 5: Exit
   - Default: Handles invalid input
5. The loop repeats until the user selects Exit.
*/
