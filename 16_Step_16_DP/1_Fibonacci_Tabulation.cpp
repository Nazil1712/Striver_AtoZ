#include<bits/stdc++.h>
using namespace std;


int fib_tabulation(int n) {

//     0 1 1 2 3 5 8 13
//    p2 p  

    int prev2 = 0, prev = 1;

    for(int i=2; i<=n; i++) {
        int curi = prev + prev2;
        prev2 = prev;
        prev = curi;
    }

    return prev;

    // we can also do like - declare curi outside for loop and return that !!
}


int main() {

    int n;
    cout << "Enter the fib number you want: " ;
    cin >> n;

    cout << endl;

    cout << "The Fibonacci number we calculated and it is: ";
    cout << fib_tabulation(n) << endl;


    return 0;
}