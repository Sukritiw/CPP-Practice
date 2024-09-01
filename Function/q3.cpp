#include <iostream>
using namespace std;
void OddNumbers(int a, int b) {

    if (a > b) {
        swap(a, b);
    }

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Odd numbers between " << a << " and " << b << " are: ";
    OddNumbers(a, b);
    return 0;
}
