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

int m1,m2,m3;
m1 = m2= m3= INT_MIN;

  for(int i = 0; i<n; i++) {
        if(arr[i]>m1) {
          m3 = m2;
          m2 = m1;
          m1 = arr[i];
        }
        else if (arr[i] > m2){
        m3 = m2;
        m2 = arr[i];
    }
        else if (arr[i] > m3)
        m3 = arr[i];
        }
cout<<endl<<"Three largest elements of the array are "<<m1<<","<<m2<<","<<m3;
return 0;
}