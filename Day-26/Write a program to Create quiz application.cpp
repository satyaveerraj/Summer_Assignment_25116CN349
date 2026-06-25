#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    int totalQuestions = 3;
    string answer;

    cout << "===== Quiz Application =====\n";
    cout << "Answer the following questions:\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "Delhi") {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Delhi.\n\n";
    }

    // Question 2
    cout << "2. Who developed the C++ programming language?\n";
    cout << "a) Dennis Ritchie\nb) Bjarne Stroustrup\nc) James Gosling\nd) Guido van Rossum\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "Bjarne") {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Bjarne Stroustrup.\n\n";
    }

    // Question 3
    cout << "3. Which data type is used to store decimal numbers in C++?\n";
    cout << "a) int\nb) char\nc) float\nd) bool\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "float") {
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is float.\n\n";
    }

    // Final score
    cout << "===== Quiz Finished =====\n";
    cout << "Your score: " << score << " out of " << totalQuestions << endl;

    if (score == totalQuestions) {
        cout << "Excellent! You got all correct.\n";
    } else if (score >= 2) {
        cout << "Good job! Keep practicing.\n";
    } else {
        cout << "Better luck next time.\n";
    }

    return 0;
}

/*
Logic Explanation:
1. Define total number of questions and initialize score.
2. Ask each question with multiple-choice options.
3. Read user’s answer and compare with the correct one.
4. If correct, increment score; otherwise, show the right answer.
5. After all questions, display the final score and feedback.
Result: A simple interactive quiz application.
*/
