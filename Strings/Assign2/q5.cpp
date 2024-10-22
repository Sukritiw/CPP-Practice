#include <iostream>
#include <string>
#include <sstream> 
#include <vector>  

using namespace std;

string maxLexicographicWord(const string& str) {
    stringstream ss(str);
    string word;
    string maxWord;

    while (ss >> word) {
     
        if (word > maxWord) {
            maxWord = word;
        }
    }

    return maxWord;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str); 

    string result = maxLexicographicWord(str);
    cout << "The lexicographically maximum word is: " << result << endl;

    return 0;
}
