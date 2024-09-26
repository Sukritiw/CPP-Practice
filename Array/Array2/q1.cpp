
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

    int x ;
    cout<<"enter value of x:";
    cin>>x;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x) {
            ++count;
        }
    }
     cout<<"number of element greater than"<<" "<< x <<" are"<< " " <<count;
    
    
}
