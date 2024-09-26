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

    for (int i = 0; i < n; i++) {
        bool flag = true;// it's unique
        for (int j = 0; j < n; j++) {
                if(j==i) continue;
                if(arr[i]==arr[j]){
                    flag = false;
                    break;
            }
         }
         if(flag == true){
            cout<<"The unique elemnt is:"<<arr[i];
            break;
         }
      }
}
          