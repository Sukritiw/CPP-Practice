#include<iostream>
using namespace std;
int main(){
    
int i=65; 
while(i<=122){
    if((i>=65 && i<=90) || (i>=97 && i<=122)){
    cout<<i<<"  "<<(char)i<<endl;
    }
    i++;
}
}
