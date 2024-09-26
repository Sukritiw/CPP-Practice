#include<iostream>
#include<climits>
using namespace std;

int main(){

// int arr[] = {1,2,3,5,6};
// int n = sizeof(arr)/4;
int n;
cout<< "Enter the size of array:";
cin>>n;

int arr[n] ;
cout<<"Enter the elements of array:";
    for(int i = 0; i<n; i++) {
        cin>>arr[i]; 
    }

  bool flag = false;
  int x = 1;
    for(int i=0; i<n; i++){
    if(arr[i] <= 0) continue;

    if(x!= arr[i]){
    flag = true;
    cout<<"The smallest positive missing element is:"<<x;
    break;
  }
  else x++;
    }
  if(flag==false){
    cout<<"There was no missing element";
  }
}
  
