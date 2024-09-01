#include<iostream>
using namespace std;

int sq(int x){
     for (int i = 1; i <= x; i++) {
        cout << i * i << " ";
    }
}

int main(){
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
   sq(x);
}
