#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = { 0, 6, 0, 7, 6, 0, 9, 1 };
    int n = 8;
    int j = 0;
    for (int i = 0; i < n; i++) {
         if (arr[i] != 0) {
            swap(arr[j], arr[i]);
                j++;
        }

    }
for (int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
return 0;

}