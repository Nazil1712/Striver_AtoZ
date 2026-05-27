#include <bits/stdc++.h>
using namespace std;


int findSqrt(int n) {
    int low = 0, high = n;

    while(low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;

        if(val <= n) {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return high;
}

int main()
{

    cout << findSqrt(16) << endl;

    return 0;
}