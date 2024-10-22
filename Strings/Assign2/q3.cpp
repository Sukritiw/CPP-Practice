// Input a string and return the number of substrings that contain only vowels.
// n×(n+1)/2

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

   string str;
    
    int n;
    cout<<"Enter the length of the string:";
    cin>>n;

    for(int i = 0; i<n;i++){
        char ch;
        cin>>ch;
        str.push_back(ch);
    }
    
     int count = 0; //totalsubstring
     int answer = 0; //currenVowelCount 

    // Iterate through the string
    for (char ch : str) {
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
           count++;
           }
       else{
                answer += (count * (count + 1)) / 2;
                count = 0; 
            }
    }
     
      answer += (count* (count+ 1)) / 2;
    

    cout << "The number of substrings containing only vowels is: " << answer << endl;

    return 0;
}
      

  



