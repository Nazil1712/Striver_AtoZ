#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1]= arr[j];
            }
            else break;
        }
        swap(arr[j+1], temp);
    }
}

void insertionWhile(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        swap(arr[j+1],temp);
    }
}

void printArr(int arr[], int n){
    cout << "Sorted array is : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void takeArr(int arr[], int n){
    cout << "Enter the array elements : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}



int main()
{
        
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int *arr = new int[n];

    takeArr(arr,n);
    // insertionSort(arr,n);
    insertionWhile(arr,n);
    printArr(arr,n);

    return 0;
}