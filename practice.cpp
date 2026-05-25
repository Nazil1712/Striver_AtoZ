#include<bits/stdc++.h>
using namespace std;

int getFirstOccurrence(vector<int> arr, int target) {
    int n = arr.size(), low = 0, high = n-1;

    int ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            ans = mid;
            high = mid - 1;
        }else if(arr[mid] < target) {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}


int getLastOccurrence(vector<int> arr, int target) {
    int n = arr.size(), low = 0, high = n-1;
    int ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            ans = mid;
            low = mid + 1;
        }else if(arr[mid] < target) {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}

int countOccurrence(vector<int> arr, int target) {
    int firstOccurrence = getFirstOccurrence(arr,target);
    int lastOccurrence = getLastOccurrence(arr,target);

    return (lastOccurrence - firstOccurrence) + 1;
}

int main() {

    vector<int> nums = {5,7,7,8,8,8,8,8,10};
    int target = 8;

    cout << countOccurrence(nums,target) << endl;


    return 0;
}