#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        bool flag = true;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                flag = false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag) break;
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
    bubbleSort(arr,n);
    printArr(arr,n);

    return 0;
}