#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    int count[26] = {0};
    int n = s.size();
    for (int i = 0; i < n; i++) { // Loop through each character of the strings
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main(){

    string s, t;
    cout << "Enter two strings: ";
    cin >> s >> t;


if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}

