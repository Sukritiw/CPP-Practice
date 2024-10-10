#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str){
    int i = 0;
    int j = str.length() - 1 ;
    while(i<j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main() {
    
    string str = ""; //empty string
    getline(cin,str);//input 
    if(isPalindrome(str)==true)
      cout<<"String is Palindrome";
    else
      cout<<"String is not Palindrome";

}