#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> nums)
{
    int n = nums.size();
    long long sn = ((n) * (n + 1)) / 2;
    long long sn2 = (n * (n + 1) * ((2 * n) + 1)) / 6;

    long long s = 0;
    long long s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s += nums[i];
        s2 += nums[i] * nums[i];
    }

    long long val1 = s - sn; // x - y
    long long val2 = s2 - sn2;
    val2 = val2 / val1; // x + y

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

int main()
{

    vector<int> nums = {1,2,3,2};

    vector<int> ans = findMissingRepeatingNumbers(nums);

    cout << "Repeating number => "  << ans[0] << endl;
    cout << "Missing number => " << ans[1] << endl;

    return 0;
}