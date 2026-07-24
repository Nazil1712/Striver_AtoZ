#include<bits/stdc++.h>
using namespace std;

// LOWER BOUND: The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x. (nums[i] >= x)


// UPPER BOUND: The upper bound of x is defined as the smallest index i such that nums[i] > x.


// If no such index is found, return the size of the array.

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


    // vector<int> arr = {1,2,2,3};
    // int x = 2;

    // vector<int> arr = {3,5,8,15,19};
    // int x = 9;
    
    vector<int> arr = {5, 7, 8, 8, 10};
    int x = 4; 

    cout << findLowerBound(arr,x) << endl;

    // int ans = lower_bound(arr.begin(), arr.end(),x) - arr.begin();
    // cout << ans << endl;


    return 0;
}