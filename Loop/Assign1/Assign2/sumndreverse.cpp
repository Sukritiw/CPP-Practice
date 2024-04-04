#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int lastdigit = 0;
    int a = n; 
    int rev = 0;
     while(n>0){
        rev*=10;   
        lastdigit = n%10;
        rev += lastdigit;
        n/=10;
    } 
    cout<<a+rev<<endl;
}