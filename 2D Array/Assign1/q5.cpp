// Write  a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n, m;

    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Enter the number of columns: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
     int maxSum = INT_MIN;
    int maxRow = 0;

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    cout << "The Row which have  maximum sum is row: " << maxRow + 1 << endl;

    return 0;

}