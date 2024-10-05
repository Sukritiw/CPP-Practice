// Write a program to rotate the matrix by 90 degrees anti-clockwise.

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
 cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
cout<<endl;
//transpose the matrix

 for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
        swap(a[i][j],a[j][i]);
    }
 }

 for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<< a[i][j]<<" ";
    }
 cout<<endl;
 }
cout<<endl;
 //rotating the array anti-cloclwise
 for(int c = 0; c<n ; c++){
    //reverse cth column 
    int i = 0;
    int j = n-1;
    while(i<j){
        swap(a[i][c],a[j][c]);
        i++;
        j--; 
    }
 }
 for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << a[i][j]<<" ";
    }
    
 cout<<endl;
 }
}
