#include<iostream>
#include<climits>
using namespace std;
int findDiff(int arr[],int n) {
    int evSum = 0, odSum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            evSum += arr[i]; 
          
        } else {
            odSum += arr[i];  
        
        }
    }
    return evSum-odSum;
}

int main(){

  int n;
  cout<<"Enter the size of an array:";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of an array:";
   for(int i = 0; i<n; i++) {
        cin>>arr[i];  
    }
     int result = findDiff(arr,n);
    cout<<"Difference between sum of elements at even indices and odd indices is:"<<result<<endl;
     
 
}