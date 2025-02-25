#include<bits/stdc++.h>
using namespace std;


void myRev(int arr[], int n) {
    int l = 0;
    int r = n - 1;


    while(l <= r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp; 
        l++;
        r--;
    }
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {

    int arr[5] = {1,2,3,4,5};

    myRev(arr,5);
    printArr(arr,5);


    return 0;
}