#include<iostream>
using namespace std;

int main(){
  

  int n;
  cout<<"Enter the size of an array:";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of an array:";
   for(int i = 0; i<n; i++) {
        cin>>arr[i];  
    }

    for(int i=0;i<n;i++){
    if(i%2==0) arr[i]+=10;
    else arr[i] = 2*arr[i];
     cout<<arr[i]<<" ";
    }
    return 0;
}