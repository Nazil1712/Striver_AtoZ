#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n) {
    
    for(int i=1; i<n; i++) {
        bool flag = true;
        for(int j=0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                flag = false;
                swap(arr[j], arr[j+1]);
            }
        }
        if(flag) break;
    }
}




void calcMedian(int arr[], int n) {
    bubbleSort(arr,n);

    if(n%2==0) {
        int index1 = n / 2;
        int index2 = (n / 2) - 1;

        double median = (double)(arr[index1] + arr[index2]) / 2;

        cout << "Median is : " << median << endl;
    }else{
        cout << "Median is : " << arr[n/2] << endl;
    }
}


int main () {


    int arr[5] = {2,4,1,3,5};

    int arr2[4] = {2,5,1,7};


    calcMedian(arr,5);
    calcMedian(arr2,4);



    return 0;
}