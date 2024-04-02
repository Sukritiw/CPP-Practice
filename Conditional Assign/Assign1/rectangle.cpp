#include<iostream>
using namespace std;
int main(){
   int l;
        cout<<" Enter the value of length:";
        cin>>l;
   int b;
        cout<<" Enter the value of breadth:";
        cin>>b;

    int a = l*b;
    int p = 2*(l+b); 
         
         if(a>p){
            cout<<" Area is greater than perimeter"<<endl;;
         }

         else if (a<p){
            cout<<"Area is not greater than perimeter"<<endl;;
         }
         else{
            cout<<" Area is equal to perimeter"
         }

}
