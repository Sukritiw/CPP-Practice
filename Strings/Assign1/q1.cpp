#include <iostream>
#include <string>


using namespace std;

int main() {
    
    string str = ""; //empty string
   
    int n;
    cout<<"Enter the length of the string:";
    cin>>n;

    for(int i = 0; i<n;i++){
        char ch;
        cin>>ch;
        str.push_back(ch);
    }
     cout<<str<<endl;
    for(int i = 0; i<n; i++){
        if(i%2 == 0)
        str[i] = '#';
    }
    cout<<str<<endl;
}
