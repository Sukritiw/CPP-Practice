#include <iostream>
#include <vector>

using namespace std;

// Function to multiply a number by factorial's current result 
void multiply(int x, vector<int>& result) {
    int carry = 0;  

    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;  
        carry = prod / 10;      
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to find factorial of a large number
   void factorial(int n) {
    vector<int> result(1, 1); 

    //  factorial logic n! = 1 * 2 * 3 * ... * n
    for (int x = 2; x <= n; x++) {
        multiply(x, result);
    }

    cout << "Factorial of " << n << " is: ";
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    factorial(number);
    return 0;
}
