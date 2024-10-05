// WAP to write element in wave form
#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows/cols : ";
    cin >> n;

    int a[n][n];
    cout << "Enter the matrix elements : ";
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
    }
}
//  cout << "\nOriginal Matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << a[i][j] << " ";
//         }
//     }

cout<<endl;
    for (int j = 0; j < n; j++) {
        if (j%2 == 0){ //bottom to top
        
        for (int i = n-1; i >=0 ; i--) {
            cout << a[i][j] << " ";
            }
        }
        else{ //top to bottom
            for (int i = 0; i < n ; i++){
                cout << a[i][j] << " ";
            }
        }

    }

}