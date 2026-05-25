#include<bits/stdc++.h>
using namespace std;


int findKRotation(vector<int> nums) {
    int size = nums.size(), low = 0, high = size - 1;
    int minElem = INT_MAX;
    int ans = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(nums[low] <= nums[mid]) {
            if(nums[low] < minElem) {
                minElem = nums[low];
                ans = low;
            }
            low = mid + 1;
        }else{
            if(nums[mid] < minElem) {
                minElem = nums[mid];
                ans = mid;
            }
            high = mid - 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {5,1,2,3,4};
    vector<int> arr3 = {4,5,1,2,3};
    vector<int> arr4 = {3,4,5,1,2};
    vector<int> arr5 = {2,3,4,5,1};
    
    cout << findKRotation(arr1) << endl;
    cout << findKRotation(arr2) << endl;
    cout << findKRotation(arr3) << endl;
    cout << findKRotation(arr4) << endl;
    cout << findKRotation(arr5) << endl;


    return 0;
}