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
    
    int i = 0;
    int j = n-1;
    bool flag = true;

      while(i<j){
        if(arr[i]!= arr[j]){
            flag = false;
        }
        i++;
        j--;
      }
      if(flag==true){
        cout<<"Array is palindrome";
      }
      else{
        cout<<"Array is not a palindrome ";
      }
}