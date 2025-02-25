#include <bits/stdc++.h>
using namespace std;


bool isPerfect(int n) {
    int sum = 1;

    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            sum += i;
            int secDiv = n / i;
            if(secDiv!=i) sum += secDiv;
        }

    }

    return sum==n;
}

int main()
{

    int n = 28;

    bool perfectHe = isPerfect(n);


    if(perfectHe) {
        cout << n << " is perfect Number" << endl;
    }else{
        cout << n << " is not a perfect Number" << endl;
    }

    return 0;
}