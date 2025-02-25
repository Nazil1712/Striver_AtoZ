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


void checkRangePrime(int start, int end)
{

    cout << "Prime Number in range " << start << " and " << end << " are : " << endl;

    for (int i = start; i <= end; i++)
    {
        bool isPrime = checkPrime(i);

        if (isPrime){
            cout << i << " " ;  
        }
    }
    cout << endl;
}

int main()
{

    int s = 2;
    int e = 10;


    checkRangePrime(s,e);

    return 0;
}