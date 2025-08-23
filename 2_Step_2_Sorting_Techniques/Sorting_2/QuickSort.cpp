#include<bits/stdc++.h>
using namespace std;


int quickPartition(int arr[], int s, int e) {
    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i]<=pivot) {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[s],arr[pivotIndex]);


    int i=s, j=e;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) j--;

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }


    return pivotIndex;
}


void quickSort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }

    int p = quickPartition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}


void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main() {
        
    int n = 6;
    int arr[n] = {3,5,1,8,2,4};

    quickSort(arr,0,n-1);
    printArr(arr,n);

    return 0;
}