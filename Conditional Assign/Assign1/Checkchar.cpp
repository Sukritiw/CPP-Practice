#include<iostream>
using namespace std;
int main(){
          char c;
          cout<<" Enter the character:";
          cin>>c;
           int ascii =  (int)c;
            if(ascii>=97 && ascii<=122  || ascii>=65 && ascii<=90){
        cout<<"Char is an Alphabet"<<endl;
      }
      else if(ascii>48 && ascii<57){
        cout<<"Char is a digit"<<endl;
      }else{
        cout<<"Char is special chararcter"<<endl;
      }
}
