#include<bits/stdc++.h>
using namespace std;


/* 

******************* FOR Understanding purpose *******************************
******************* You can use ans variable as well *******************************

*/

/* int floorSqrt(int n) {
    int low = 1, high = n - 1;
    int ans = 1;

    while(low <= high) {
        long long mid = (low + high) / 2;
        long long val = (mid * mid);

        if(val <= n) {
            ans = mid;  // Beacuse this might be my answer
            low = mid + 1; 
            // Moving right because If we move to left we will always get answer lesser than low (current) and we want maximum, So no meaning to move to left
        }else{
            high = mid - 1;
        }
    }

    return ans;
} */


int floorSqrt(int n) {
    int low = 1, high = n - 1;

    while(low <= high) {
        long long mid = (low + high) / 2;
        long long val = (mid * mid);

        if(val <= n) {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return high;
}


int main() {

    int n = 28;

    cout << floorSqrt(n) << endl;

    return 0;
}