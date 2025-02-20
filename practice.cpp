#include<bits/stdc++.h>
using namespace std;

void isPerfect(int n) {

    int temp = n;
    int sum = 1;
    
    for(int i=2; i*i<=n; i++) {
        if(temp % i == 0) {
            sum += i;
            int secDiv = temp / i;
            if(secDiv!=i) sum += secDiv;
        }
    }

    if(sum==n) cout << n << " is perfect Number " << endl;
    else cout << n << " is NOT a perfect Number " << endl;
}

int main() {


    int n;
    cout << "Enter the number to check whether it is perfect number or not : ";
    cin >> n;

    isPerfect(n);

    return 0;
}