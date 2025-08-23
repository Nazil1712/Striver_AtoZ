#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;

    int arr[n] = {1,2,3,2,1,12};


    // PreStoring...
    map<int, int> mpp;

    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }

    
    cout << "Enter Query Length : ";
    int q;
    cin>>q;

    while(q--) {
        int number;
        cin >> number;

        cout << number << " appears \""  << mpp[number] << "\" times in array. " << endl;
    }
    return 0;
}