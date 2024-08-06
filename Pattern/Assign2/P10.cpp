#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"No. of rows:";
    cin>>n;

    // Upper half of the butterfly
    int m = n-1;
    int nsp = 2*m-1;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        for(int k = 1; k <= nsp; k++){
            cout<<"  ";
        }
        nsp -= 2;
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Middle row
    for(int i = 1; i <= 2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;

    // Lower half of the butterfly
    nsp = 1;
    for(int i = m; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        for(int k = 1; k <= nsp; k++){
            cout<<"  ";
        }
        nsp += 2;
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
