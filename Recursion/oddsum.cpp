#include<iostream>
using namespace std;

int Sum(int a, int b) {
if(a > b) return 0;
if(a % 2 == 0) return Sum(a+1,b);
 return a + Sum(a+2,b);
}


int main() {
int a;
cout<<"Enter value of a :";
cin >> a ;
int b;
cout<<"Enter value of b :";
cin >> b ;
cout << Sum(a,b) << endl;
return 0;
}
