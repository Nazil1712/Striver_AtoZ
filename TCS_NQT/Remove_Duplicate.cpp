#include<bits/stdc++.h>
using namespace std;



int rdfsa(int arr[], int n) {
    int i = 0;

    for(int j=0; j<n; j++) {
        if(arr[i]!=arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }

    return i+1;
}


int main() {

    int arr[11] = {1,1,1,2,2,3,3,3,3,4,4};

    cout << rdfsa(arr,11) << endl;

    cout << "Modified Array : " ;
    for(int i=0; i<11; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}