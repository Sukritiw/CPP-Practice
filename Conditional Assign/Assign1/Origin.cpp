#include<iostream>
using namespace std;
int main(){
           int x,y;
           cout<<"enter x coordinate:";
           cin>>x;
           cout<<"enter y coordinate:";
           cin>>y;

           if(x==0 && y == 0){
             cout<<" It lies in the origin"<<endl;
           }
           else if(x==0){
            cout<<"It lies on Y-Axis"<<endl;
           }
           else if(y==0){
            cout<<"It lies on X-Axis"<<endl;
           }
           else if(x>0 && y>0){
            cout<<" Lies on 1st Quadrant "<<endl;
           }
\
           else if(x<0 && y>0){
            cout<<" Lies on 2nd Quadrant "<<endl;
           }

           else if(x<0 && y<0){
            cout<<" Lies on 3rd Quadrant "<<endl;
           }

           else if(x>0 && y<0){
            cout<<" Lies on 4th Quadrant "<<endl;
           }

          
}
