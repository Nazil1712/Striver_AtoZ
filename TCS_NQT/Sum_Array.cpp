#include<bits/stdc++.h>
using namespace std;


void sumOfArr(int arr[], int n) {
    int sum = 0;


    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    cout << "Sum of Arr Elements is : " << sum << endl;
}



int main() {

    int arr[5] = {1,2,3,4,5};


    sumOfArr(arr,5);

    return 0;
}