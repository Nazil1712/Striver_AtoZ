#include<iostream>
using namespace std;


/* 
    return 0 if < m 
    return 1 if == m
    return 2 if > m

*/


/* int isEqualToNthPow(int mid, int n, int m) {
    long long ans = 1;

    for(int i=1; i<=n; i++) {
        ans = ans * mid;
        if(ans > m) return 2;
    }

    if(ans == m) return 1;
    return 0;
} */



// Using Exponentiation  - O(log n)
int isEqualToNthPow(int mid, int n, int m) {
    int ans = 1;
    int x = mid;

    while(n) {
        if(n%2==1) {
            ans *= x;
            n = n - 1;

            if(ans > m) return 2;
        } else{
            x = x * x;
            n = n / 2;
        }
    }

    return ans == m ? 1 : 0;
}

int NthRoot(int n, int m) {
    int low = 1, high = m;

    while(low <= high) {
        int mid = (low + high) / 2;
        int midN = isEqualToNthPow(mid, n, m);

        if(midN == 1) return mid;
        else if(midN == 0) {
            low = mid + 1;;
        }else {
            high = mid - 1;
        }
    }

    return -1;
}


int main() {

    // int n = 4;
    // int m = 69;
    // cout << NthRoot(n, m) << endl;

    int n = 3;
    int m = 125;
    cout << NthRoot(n, m) << endl;


    return 0;
}