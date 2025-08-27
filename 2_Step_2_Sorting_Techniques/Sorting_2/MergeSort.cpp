#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        arr1[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int j=0; j<len2; j++){
        arr2[j] = arr[mainArrayIndex++];
    }

    int i = 0;
    int j = 0;
    mainArrayIndex = s;


    while(i<len1 && j<len2){
        if(arr1[i] < arr2[j]){
            arr[mainArrayIndex++] = arr1[i++];
        }
        else{
            arr[mainArrayIndex++] = arr2[j++];
        }
    }

    while(i<len1){
        arr[mainArrayIndex++] = arr1[i++];
    }

    while(j<len2){
        arr[mainArrayIndex++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
}


void striverMerge(int arr[], int low, int high) {
    int mid = (low + high) / 2;
    vector<int> temp;

    int i = low;
    int j = mid+1;

    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i++]);
    }

    while(j <= high) {
        temp.push_back(arr[j++]);
    }


    for(int i=low; i<=high; i++) {
        arr[i] = temp[i - low];
    }
}


void mergeSort(int arr[], int s, int e){
    if(s >= e) return;

    int mid = s + (e-s)/2;

    mergeSort(arr,s,mid);

    mergeSort(arr,mid+1,e);

    striverMerge(arr,s,e);
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {4,1,2,3,-1};
    mergeSort(arr,0,5-1);
    printArr(arr,5);
    
    return 0;
}