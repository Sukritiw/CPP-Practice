// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include <iostream>
#include <string>
#include <climits>  

using namespace std;

int main() {
  
    string str;
    
    int n;
    cout<<"Enter the length of the string:";
    cin>>n;

    for(int i = 0; i<n;i++){
        char ch;
        cin>>ch;
        str.push_back(ch);
    }
   
    int max1 = INT_MIN, max2 = INT_MIN;

    // Iterate through the string to find the largest and second largest digits
    for (char ch : str) {
      
        if (isdigit(ch)) {
            int digit = ch - '0'; 
            
            if (digit > max1) {
                max2 = max1;  
                max1 = digit; 
            } 
           
            else if (digit > max2 && digit < max1) {
                max2 = digit;
            }
        }
    }

    if (max2 != INT_MIN) {
        cout << "The second largest digit is: " << max2 << endl;
    } else {
        cout << "There is no second largest digit." << endl;
    }

    return 0;
}
