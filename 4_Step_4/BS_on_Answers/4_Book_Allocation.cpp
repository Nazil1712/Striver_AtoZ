#include<bits/stdc++.h>
using namespace std;

int getNoOfStudents(vector<int> nums, int students, int pages) {
    int cntStudent = 1, pagesStudent = 0;

    for(int i=0; i<nums.size(); i++) {
        if(pagesStudent + nums[i] <= pages) {
            pagesStudent += nums[i];
        }else{
            cntStudent++;
            pagesStudent = nums[i];
        }
    }

    return cntStudent;
}


int allocateBooks(vector<int> nums, int students) {
    int low = *(max_element(nums.begin(), nums.end()));
    int high = accumulate(nums.begin(), nums.end(),0);

    while(low <= high) {
        int mid = (low + high) / 2;

        int cntStudent = getNoOfStudents(nums,students, mid);

        if(cntStudent <= students) {
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return low;
}


int main() {

    vector<int> nums = {12, 34, 67, 90};
    int students = 2;

    vector<int> nums2 = {25, 46, 28, 49, 24};
    int students2 = 4;

    cout << allocateBooks(nums,students) << endl;
    cout << allocateBooks(nums2,students2) << endl;


    return 0;
}