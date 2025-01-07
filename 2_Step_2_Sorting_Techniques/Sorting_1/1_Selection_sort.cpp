#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
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

    selectionSort(arr,n);
    printArr(arr,n);

    return 0;
}