#include<bits/stdc++.h>
using namespace std;


// x ^ n

int findPowerExponentiation(int x, int n) { 
    int ans = 1;

    while(n) {  
        if(n%2==1) {
            ans *= x;
            n = n - 1;
        }else{
            x = x * x;
            n = n / 2;
        }
    } 


    return ans;
}   

int findPowerExponentiationFloatNumbers(double x, double n) { 
    double ans = 1;

    while(n) {  
        if(n%2.0==1.0) {
            ans *= x;
            n = n - 1.0;
        }else{
            x = x * x;
            n = n / 2.0;
        }
    } 


    return ans;
}   

int main() {

    // cout << findPowerExponentiation(2,21) << endl;
    // cout << findPowerExponentiation(2,5) << endl;
    
    cout << findPowerExponentiationFloatNumbers(2,2.5) << endl;

    return 0;
}