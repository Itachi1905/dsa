#include <iostream>
#include <algorithm>
using namespace std;
void reverseCharacters(string& word) {
    reverse(word.begin(), word.end());
}

void reverseWords(string& s) {
    string word;
    string result;
    bool newWord = false;

    for (char c : s) {
        if (c != ' ') {
            word += c;
            newWord = true;
        } else {
            if (newWord) {
                reverseCharacters(word);
                result += word + ' ';
                word.clear();
                newWord = false;
            } else {
                result += ' ';
            }
        }
    }

    // Reverse the last word (if any)
    if (newWord) {
        reverseCharacters(word);
        result += word;
    }

    s = result;
}

int main() {
    string inputString = "Hello World";
    // Call the function to reverse the words
    reverseWords(inputString);

    // Output the result
    cout << inputString << endl;

    return 0;
}
