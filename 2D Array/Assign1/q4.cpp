// Write a C++ program to find the largest element of a given 2D array of integers.

#include<iostream>
#include<climits>
using namespace std;

int main(){

 
    int n, m;
    cout << "Enter the number of rows: ";
    cin >>n;
    cout << "Enter the number of columns: ";
    cin >>m;

    int arr[n][m];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}



