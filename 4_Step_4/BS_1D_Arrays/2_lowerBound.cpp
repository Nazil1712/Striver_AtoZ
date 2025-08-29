#include<bits/stdc++.h>
using namespace std;


int findLowerBound(vector<int> &arr, int x) {
    int low = 0, n = arr.size(), high = n-1;
    int ans = n; // given in the problem statement

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return ans;
}


int main() {


    vector<int> arr = {3,5,8,15,19};
    int x = 9;

    // cout << findLowerBound(arr,x) << endl;

    int ans = lower_bound(arr.begin(), arr.end(),x) - arr.begin();
    cout << ans << endl;


    return 0;
}