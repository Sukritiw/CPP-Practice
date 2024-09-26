#include<iostream>
#include<climits>
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
    
bool flag = false;

for(int i=0; i<n; i++){
for(int j = i+1; j<n; j++){
 if(arr[i]==arr[j]){
    flag = true;
    break;
 }
}
if(flag == true) break;
}
if(flag==true) cout<<"Contains Duplicate";
else cout<<"All elements are unique";
}