#include <bits/stdc++.h>
using namespace std;

void revStr(string s) {

    int n = s.size();

    for(int i=0; i<=n/2; i++) {
        swap(s[i],s[n-i-1]);
    }

    cout << s << endl;
}


int main()
{


    string str = "Dhalwala Nazil N.";

    revStr(str);

    return 0;
}