#include <bits/stdc++.h>
using namespace std;

int getFirstOccurrence(vector<int> nums, int target)
{
    int n = nums.size(), low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }

        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return first;
}

int getLastOccurrence(vector<int> nums, int target)
{
    int n = nums.size(), low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }

        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return last;
}


int getOccurrences(vector<int> nums, int target) {
    int first = getFirstOccurrence(nums,target);

    if(first == -1) return 0;

    int count = (getLastOccurrence(nums,target) - first) + 1;

    return count;
}

int main() {

    vector<int> nums = {5,7,7,8,8,8,8,8,10};
    int target = 8;

    cout << getOccurrences(nums,target) << endl;

    return 0;
}