#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;  // Removes the last digit
        count++;
    }
    return count;
}

void printSquare(int n) {
    int sq = n  * n; //square of the number given
    cout << "The square of the n is: " << sq << endl;
}

int main() {
    int n;
    cout << "Enter a n: ";
    cin >> n;

    int digitCount = countDigits(n);
    cout << "The n of digits in the n is: " << digitCount << endl;
    printSquare(n);

    return 0;
}
