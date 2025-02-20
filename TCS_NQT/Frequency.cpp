#include<bits/stdc++.h>
using namespace std;



map<int,int> checkFreq(int arr[], int n) {
    map<int,int> mp;


    for(int i=0; i<n; i++) {
        mp[arr[i]]++;
    }

    return mp;
}


int main() {

    int arr[6] = {10,5,10,15,10,5};

    map<int, int> ans = checkFreq(arr,6);


    for(auto it:ans) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    



    return 0;
}