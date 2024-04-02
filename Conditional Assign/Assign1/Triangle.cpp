#include<iostream>
using namespace std;
int main(){
           int a,b,c;
           cout<<"enter value of side a:";
           cin>>a;
           cout<<"enter value of side b:";
           cin>>b;
           cout<<"enter value of side c:";
           cin>>c;

          if(a==b && b==c && c==a){
            cout<<" It's Equilateral Triangle"<<endl;
            }
            else if(a!=b && b==c && c==b || a==b && b==a && c!=a || a==c && c==a && c!=b){
                cout<<"It's a Isosceles Triangle"<<endl;
            }
            else{
                cout<<"It's a Scalene Triangle"<<endl;
            }




}
