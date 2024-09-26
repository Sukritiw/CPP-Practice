#include<iostream>
#include<climits>
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
    bool flag = true;
     for(int i = 0; i<n-1; i++) {
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
     }
     if(flag == true) cout<<"Array is sorted";
     else cout<<"Array is unsorted";



}