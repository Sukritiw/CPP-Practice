#include<iostream>
using namespace std;

int main(){

 int m;
    cout << "Enter the no. of rows: ";
    cin >> m;
    int n;
    cout << "Enter the no. of columns: ";
    cin >> n;

    int arr1[m][n];
    int arr2[m][n];

   // arr1
    cout << "Enter elements for arr1:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }

    //  arr2
    cout << "Enter elements for arr2:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr2[i][j];
        }
    }

    // Add arr1 and arr2, storing  the result in arr2
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr2[i][j] += arr1[i][j];
        }
    }

    // Printing the result 
    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


