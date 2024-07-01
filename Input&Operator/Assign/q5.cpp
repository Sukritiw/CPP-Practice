#include <iostream>
using namespace std;

int main() {
    char ch1, ch2;
    cout << "Enter the first character: ";
    cin >> ch1;
    cout << "Enter the second character: ";
    cin >> ch2;
    int ascii_diff = ch1 - ch2;
    cout << "The difference of the ASCII values is : " << ascii_diff <<endl;
    return 0;
}
