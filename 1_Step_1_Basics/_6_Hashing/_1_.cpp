#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cout << "Enter the length of Array : ";
    cin>>n;

    int arr[n];

    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }


    // Pre Storing
    int maxLengthGiven = 13;
    int hash[maxLengthGiven] = {0};
    for(int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }


    cout << "Enter Query Numbers Length : ";

    int q;
    cin >> q;


    cout << "Enter Query Numbers : ";
    while(q--) {
        int number;
        cin >> number;

        cout << number << " appears " << hash[number] << " times" << endl;
    }



    return 0;
}