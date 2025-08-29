#include<bits/stdc++.h>
using namespace std;


int upperBound(vector<int> arr, int x) {
    int low = 0, n = arr.size(), high = n-1;
    int ans = n;


    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {1,2,2,3};
    int x = 1;


    // cout << upperBound(arr,x) << endl;

    int ub = upper_bound(arr.begin(), arr.end(),x) - arr.begin();
    cout << ub << endl;

    return 0;
}