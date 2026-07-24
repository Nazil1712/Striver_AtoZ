#include <bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> nums, int cows, int distance)
{
    int cntCows = 1, lastCow = nums[0];

    for(int i=1; i<nums.size(); i++) {
        if(nums[i] - lastCow >= distance) {
            cntCows++;
            lastCow = nums[i];
        }
        if(cntCows >= cows) return true;
    }

    return false;
}

int aggressiveCows(vector<int> &nums, int cows)
{
    sort(nums.begin(), nums.end());

    int n = nums.size(), 
        low = 1, high = nums[n-1] - nums[0];

    
    while(low <= high) {
        int mid = (low + high) / 2;

        if(canWePlace(nums, cows, mid)) {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return high;
}

int main()
{
    vector<int> nums = {0, 3, 4, 7, 10, 9};
    vector<int> nums2 = {4, 2, 1, 3, 6};
    
    int cows = 4;
    int cows2 = 2;

    cout << aggressiveCows(nums,cows) << endl;
    cout << aggressiveCows(nums2,cows2) << endl;

    return 0;
}