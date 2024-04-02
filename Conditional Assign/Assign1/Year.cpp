#include<iostream>
using namespace std;
int main(){
         
         int y;
         cout<<" Enter a Year:";
         cin>>y;

         if(y%400==0){
            cout<<" It's a Leap Year"<<endl;
         }
         else if(y%4==0){
            cout<<"it's  a leap year"<<endl;
         }
         else if(y%100==0){
            cout<<"it's not a leap year"<<endl;
         }
         else {
            cout<<"It's not a leap year";
         }

}
