#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the amount:";
    cin>>n;

   int n1=0,n2=0,n5=0,n10=0,n20=0;
   int n50=0,n100=0,n200 =0,n500=0;
   int n2000=0;

   switch(1){
   case 1:
    n2000 = n/2000;
     n-=(2000*n2000);
   
   case 2:
    n500 = n/500;
     n-=(500*n500);
   
   case 3:
    n200 = n/200;
     n-=(200*n200);
   
   case 4:
    n100 = n/100;
     n-=(100*n100);
   
   case 5:
    n50 = n/50;
     n-=(50*n50);
   
   case 6:
    n20 = n/20;
     n-=(20*n20);
   
   case 7:
    n10= n/10;
     n-=(10*n10);
   
   case 8:
    n5= n/5;
     n-=(5*n5);
   
   case 9:
    n2= n/2;
     n-=(2*n2);
   
   case 10:
    n1= n/1;
     n-=(1*n1);
   }  
   int totalNotes = n1 + n2 + n5 + n10 + n20 + n50 + n100 + n200 + n500 + n2000 ;
    cout<<totalNotes<<endl;
}
