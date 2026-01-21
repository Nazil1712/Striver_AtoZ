#include <bits/stdc++.h>
using namespace std;

int myUpperBound(vector<int> nums, int x) {
    int n = nums.size(), low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(nums[mid] > x) {
            ans = mid;
            high = mid - 1;
        }else{
            
        }
    }
}


int main() {


    return 0;
}