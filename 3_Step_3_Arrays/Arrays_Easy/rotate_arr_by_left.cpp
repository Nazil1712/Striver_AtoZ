#include <bits/stdc++.h>
using namespace std;


void printArr(vector<int> nums) {
    for(int i=0;i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int rotateArrByLeft(vector<int> nums) {
    int n = nums.size();

    int temp = nums[0];

    for(int i=1; i<n; i++) {
        nums[i-1] = nums[i];
    }

    nums[n-1] = temp;

    printArr(nums);
}



int main()
{

    vector<int> arr = {2,3,4,1,5,8};

    rotateArrByLeft(arr);




    return 0;
}