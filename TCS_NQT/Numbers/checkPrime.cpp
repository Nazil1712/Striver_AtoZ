#include <bits/stdc++.h>
using namespace std;


bool checkPrime(int n) {

    // 0 and 1 both are not considered as a prime number
    if(n==0 || n==1) return 0;

    
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) return 0;
    }


    return 1;
}



int main()
{

    int n = 4;

    bool ans = checkPrime(n);

    if(ans) {
        cout << n << " is prime Number" << endl;
    }
    else{
        cout << n << " is not a prime Number" << endl;
    }

    return 0;
}