#include<iostream>
#include<vector>
using namespace std;


int countTriplets(int a[], int n, int x){
 
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(a[i]+a[j]+a[k] == x) count++;
         }
      }
   }
   return count;
}

int main(){

int n;
cout<<"Size of array is :";
cin>>n;

int a[n];

  for(int i = 0; i<n; i++){
    cin>>a[i];
}

int x;
cout<<"Enter the value of x:";
cin>>x;

cout<<countTriplets(a,n,x);

}
