#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter no. of row: ";
 cin>>n;
for(int i =1;i<=n;i++){
    for(int j=1; j<=n-i;j++){
      cout<<j;
   }
   cout<<endl;
}
}


//OUTPUT 
// row nu. 4
//1 2 3 
//1 2
//1
