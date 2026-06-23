#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);  

    stringstream ss(sentence);
    string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    cout << "Total number of words: " << wordCount << endl;

    return 0;
}

/*
Logic Explanation:
1. Use getline() to read the entire sentence including spaces.
2. Create a stringstream object to process the sentence.
3. Extract words from the stringstream using >> operator.
4. For each extracted word, increment the counter.
5. Finally, display the total word count.
*/
