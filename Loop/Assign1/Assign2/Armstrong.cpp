#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=500;i++){
    int n = i;
    int cubesum = 0;
    while(n>0){
        int ld = n%10;
        cubesum  += (ld*ld*ld);
        n/=10;
    }
     if(i==cubesum) {
        cout<<cubesum<<endl;
       }
    }
  }
