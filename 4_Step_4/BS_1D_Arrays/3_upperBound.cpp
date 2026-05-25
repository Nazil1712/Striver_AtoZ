#include<bits/stdc++.h>
using namespace std;


// LOWER BOUND: The lower bound algorithm finds the first and """"smallest index"""" in a sorted array where the value at that index is greater than or equal to a given key i.e. x. (nums[i] >= x)


// UPPER BOUND: The upper bound of x is defined as the """"smallest index"""" i such that nums[i] > x.


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

    // vector<int> arr = {1,2,2,3};
    // int x = 2;
    // cout << findUpperBound(arr,x) << endl;
    
    vector<int> arr = {3,5,8,15,19};
    int x = 9;
    
    cout << findUpperBound(arr,x) << endl;

    int ub = upper_bound(arr.begin(), arr.end(),x) - arr.begin();
    cout << ub << endl;

    return 0;
}