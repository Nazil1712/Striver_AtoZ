#include <bits/stdc++.h>
using namespace std;


/* 

you are given 3 integers p,q,r

1)select any 2 integer from it and do +1 to them
2)then do -1 to remaing number

you can do this as many times you want, you need to print number of operations, 
required to make all the three numbers equal

1) If all numbers are equal - print 0
2) If not possible then print -1


Input:
4
1 1 2 
3 7 3
1 2 3
4 4 4


Output:
-1
2
-1
0

*/



void solve(int p, int q, int r) {
    if(p == q  && q == r) {
        cout << 0 << endl;
    }

    else if( p==q || q == r || p == r) {
        if(p==q) {
            int diff = r - p;
            int ans = diff / 2;

            if(diff % 2 != 0) {
                cout << -1 << endl;
            }
            else {
                cout << ans << endl;
            }
        }

        else if(q==r) {
            int diff = p - r;
            int ans = diff / 2;


            if(diff%2!=0) {
                cout << -1 << endl;
            }else{
                cout << ans << endl;
            }
        }

        else if(p == r) {
            int diff = q - p;
            int ans = diff / 2;


            if(diff%2!=0) {
                cout << -1 << endl;
            }
            else{
                cout << ans << endl;
            }
        }
    }

    else{
        cout << -1 << endl;
    }
}


int main()
{

    int tCase, p, q, r;
    cin>>tCase;


    while(tCase--) {
        cin >> p >> q >> r;

        solve(p,q,r);
    }
    return 0;
}