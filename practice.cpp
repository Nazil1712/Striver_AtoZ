#include<bits/stdc++.h>
using namespace std;



void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {

    int arr[6] = {6,12,5,3,-1,5};


    selectionSort(arr,6);


    return 0;
}