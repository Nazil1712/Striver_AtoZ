#include <bits/stdc++.h>
using namespace std;

void findPair(vector<vector<int>> nums)
{
    map<int, int> mp;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int first = nums[i][0];
        int second = nums[i][1];

        if (mp.find(second) != mp.end() && mp[second]==first) {
            cout << "(" << first << "," << second << ")" << " ";
        }
        else{
            mp[first] = second;
        }
    }
}

int main()
{

    // vector<int> nums;
    vector<vector<int>> nums = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};


    findPair(nums);

    return 0;
}