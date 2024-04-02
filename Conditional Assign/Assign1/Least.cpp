#include<iostream>
using namespace std;
int main(){
      int a,b,c;
           cout<<"enter marks of std 1:";
           cin>>a;
           cout<<"enter marks of std 2:";
           cin>>b;
           cout<<"enter marks of std 3:";
           cin>>c;

           if(a>b && a>c && c<b){
            cout<<" c have lesser marks"<<endl;
           }
           else if(a<b && b>c && c>a){
            cout<<"a have lesser marks"<<endl;
           }
           else{
            cout<<"b have lesser marks"<<endl;
           }

}
