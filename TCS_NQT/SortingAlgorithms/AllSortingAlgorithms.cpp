#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}


void bubbleSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        bool flag = true;

        for(int j=0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }

        if(flag) break;
    }
}


void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for(;j>=0;j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}


void myMerge(int arr[], int s, int e) {
    int mid = s + (e-s) / 2;
    int len1 = mid - s + 1;
    int len2 = e-mid;


    int* arr1 = new int[len1];
    int* arr2 = new int[len2];


    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        arr1[i] = arr[mainArrayIndex++];
    }


    mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++) {
        arr2[i] = arr[mainArrayIndex++];
    }


    int i = 0, j = 0;
    mainArrayIndex = s;


    while(i<len1 && j<len2) {
        if(arr1[i] < arr2[j]) {
            arr[mainArrayIndex++] = arr1[i++];
        }
        else{
            arr[mainArrayIndex++] = arr2[j++];
        }
    }


    while(i<len1) {
        arr[mainArrayIndex++] = arr1[i++];
    }


    while(j<len2) {
        arr[mainArrayIndex++] = arr2[j++];
    }



    delete[] arr1;
    delete[] arr2;
}


void mergeSort(int arr[], int s, int e) {
    if(s >= e) return;

    int mid = s + (e-s) / 2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    myMerge(arr,s,e);
}


int myPartition(int arr[], int s, int e) {
    int pivot = arr[s], cnt = 0;


    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivot) cnt++;
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;


    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) i++;

        while(arr[j] > pivot) j--;

        if(i < pivotIndex && j>pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }


    return pivotIndex;
}


void quickSort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }

    int p = myPartition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}


void printArr(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main()
{

    int n = 5;
    int arr[n] = {64,25,12,22,11};

    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    // insertionSort(arr,n);
    // mergeSort(arr,0,n-1);
    // quickSort(arr,0,n);
    printArr(arr,n);

    return 0;
}