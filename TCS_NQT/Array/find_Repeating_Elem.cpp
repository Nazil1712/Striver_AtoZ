#include <bits/stdc++.h>
using namespace std;


void findRepeatingElements(int arr[], int n) {

    map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[i]++;
    }


    for(auto i : mp) {
        if(i.second > 1) {
            cout << i.first << " ";
        }
        cout << endl;
    }
    
}


int main()
{


    int arr[8] = {1,1,2,3,4,4,5,2};


    findRepeatingElements(arr,8);


    return 0;
}