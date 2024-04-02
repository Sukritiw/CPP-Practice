#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the a number here: ";
    cin>>n;
    for(int i=1; i<=10; i++){
        int x= n*i;
        cout<<n<<"*"<<i<<"="<<x<<endl;
    }
}