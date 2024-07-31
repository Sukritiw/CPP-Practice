#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"No. of rows:";
    cin>>n;
//    int nst = 1;
//    int nsp = n-1;
   for(int i = 1; i<=n;i++){
         for(int j = 1; j<=n-i; j++){ 
            cout<<" ";
   }
     for(int j = i; j>=1; j--){  // decreased triangle
            cout<<(char)(j+64);
   }

     for(int k = 2; k<=i; k++){ 
            cout<<(char)(k+64);
   }
   cout<<endl;
}

}
