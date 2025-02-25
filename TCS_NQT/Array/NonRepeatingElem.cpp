#include <bits/stdc++.h>
using namespace std;


void findNonRepeatingElements(int arr[], int n) {

    map<int, int> mp;

    for(int i=0; i<n; i++) {
        mp[arr[i]]++;
    }


    for(auto it: mp) {
        if(it.second == 1) {
            cout << it.first  << " ";
        }
    }
    cout << endl;
} 



int main()
{

    return 0;
}