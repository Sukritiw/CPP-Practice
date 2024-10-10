#include <iostream>
#include <string>
using namespace std;

int main() {

 string str = ""; //empty string
    getline(cin,str);//input 
    
    int x = 0;
    for(int i = 0 ; i<str.length(); i++){
       x *= 10;
       x += str[i]-48; 
    } 
     cout<<x;
}