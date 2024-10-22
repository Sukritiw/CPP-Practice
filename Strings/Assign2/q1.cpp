#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    string concatenatedString = str + revStr;
    cout << "Concatenated string: " << concatenatedString << endl;

    return 0;
}
