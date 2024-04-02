#include<iostream>
using namespace std;
int main(){
           int x1,x2,x3,y1,y2,y3;
           cout<<"enter 1st point";
           cin>>x1>>y1;
           cout<<"enter 2nd point";
           cin>>x2>>y2;
           cout<<"enter 3rd point";
           cin>>x3>>y3;

           int ans = (x2*y3 - y2*x3) - (x1*y3 - y1*x3) + (x1*y2 - x2*y1);

           if( ans == 0){
            cout<<"It's Collinear"<<endl;
           }
           else{
            cout<<" Its Non Collinear"<<endl;
           }
          
           
}
