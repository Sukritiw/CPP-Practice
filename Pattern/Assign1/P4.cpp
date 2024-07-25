#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter no. of row: ";
 cin>>n;
for(int i =1;i<=n;i++){
    if(i % 2 == 1)
       for(int j = 1; j <= i; j++) {
       cout << j << " ";
       }
else
     for(int j = 1; j <= i; j++){
      cout<<(char)(j+64)<<" ";
}
   cout<<endl;
}
}
