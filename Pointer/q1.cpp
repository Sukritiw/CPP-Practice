#include<iostream>
using namespace std;

int main(){
  
  int x,y;
  cout<<"Enter the value of x and y:";
  cin>>x>>y;

  int *ptrx = &x;
  int *ptry = &y;

int mul = (*ptrx) * (*ptry);
cout<<mul;

return 0;
}


