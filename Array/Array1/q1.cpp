#include<iostream>
using namespace std;

int main(){
  
int n;
cout<< "Enter the size of array:";
cin>>n;

int arr[n] ;
cout<<"Enter the elements of array:";
    for(int i = 0; i<n; i++) {
        cin>>arr[i];  
    }

int mul = 1;
for(int i = 0; i<n; i++){
mul = mul * arr[i];
}
cout<< mul;
return 0;

}
