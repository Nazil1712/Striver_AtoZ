#include<bits/stdc++.h>
using namespace std;


int insertAtEnd(int arr[], int n, int element){
    arr[n] = element;

    return n+1;
}

int insertAtBeginning(int arr[], int n, int element) {
    for(int i=n; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = element;

    return n+1;
}

int insertAtPosition(int arr[], int n, int position, int element) {
    if(position==0) {
        insertAtBeginning(arr,n,element);
    }

    else if(position==n) {
        insertAtEnd(arr,n,element);
    }

    for(int i=n; i>position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = element;


    return n+1;
}


void printArr(int arr[], int n) {

    cout << "Length of Array : " << n << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}


int main() {

    int n = 5;
    int arr[n] = {1,2,3,4,5};

    printArr(arr,n);   
    
    n = insertAtBeginning(arr,n,0);
    printArr(arr,n);
    
    n = insertAtEnd(arr,n,7);
    printArr(arr,n);
    
    n = insertAtPosition(arr,n,6,6);
    printArr(arr,n);


    return 0;
}