#include <bits/stdc++.h>
using namespace std;


void generatePascalsRow(int n) {
    int ans=1;

    cout << ans << " ";

    for(int i=1; i<n; i++) {
        ans = ans * (n-i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
}


int main()
{

    int n;
    cout << "Give a num, till which row you want to print Pascal's triangle : ";
    cin >> n;

    for(int i=1; i<=n; i++) {   
        generatePascalsRow(i);
    }

    return 0;
}