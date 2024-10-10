#include <iostream>
#include <string>
using namespace std;



int main() {
    
    string str = ""; //empty string
    getline(cin,str);//input 
    
    int n = str.length();
    int i = n/2;
    int j = n-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }

     cout<<str;

}