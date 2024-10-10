#include <iostream>
#include <string>
using namespace std;

bool isConsonant(char ch){
    if(ch<65) return false;
    else if(ch>90 && ch<97) return false;
    else if(ch>122) return false;
    else if(ch == 'a' || ch == 'A') return false;
    else if(ch == 'e' || ch == 'E') return false;
    else if(ch == 'i' || ch == 'I') return false;
    else if(ch == 'o' || ch == 'O') return false;
    else if(ch == 'u' || ch == 'U') return false;
    else return true;
}
int main() {
    
    string str = ""; //empty string
    getline(cin,str);//input 
       
    int count = 0;
    for(int i = 0 ; i<str.length(); i++){
        if(isConsonant(str[i])) count++;
       
    }
    cout<<count<<endl;
}