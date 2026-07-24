#include<bits/stdc++.h>
using namespace std;


int fib(int n, vector<int> &dp) {

    if(n<=1) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}


int main() {

    int n;
    cout << "Enter the fib number you want: " ;
    cin >> n;

    cout << endl;

    vector<int> dp(n+1, -1);

    cout << "The Fibonacci number we calculated and it is: ";
    cout << fib(n, dp) << endl;


    return 0;
}