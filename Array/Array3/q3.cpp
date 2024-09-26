#include <iostream>

using namespace std;

int firstnonrep(int arr[], int n) {
    int freq[1000] = {0}; 

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            return arr[i];
        }
    }

    return -1; 
}

int main() {
    int arr[] = {4,5,5,4};
    int n = (sizeof(arr) / 4); 

    int result = firstnonrep(arr, n);
    
    if (result != -1) {
        cout << "The first non-repeating element is: " << result << endl;
    } else {
        cout << "No non-repeating element found." << endl;
    }

    return 0;
}
