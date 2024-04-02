#include<iostream>
using namespace std;
int main(){
        int r;
        cout<<" Enter the vlue or r:";
        cin>>r;

        
        float a = 3.141*r*r;// a is AREA
        float b = 2*3.141*r;// B is Circumference
        
         
         if(a>b){
            cout<<" Area is larger than circumference"<<endl;;
         }

         else if(a<b){
            cout<<"Area is not larger than circumference"<<endl;;
         }
         else{
            cout<<"Area is equal to circumference"<<endl;
         }

}
