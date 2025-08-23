#include <bits/stdc++.h>
using namespace std;


void capitalizeEachWord(string s) {

    int n = s.size();

    for(int i=0; i<n; i++) {
        if(i==0 || i==(n-1)) {
            s[i] = towupper(s[i]);
        }
        else if(s[i]==' ') {
            s[i-1] = towupper(s[i-1]);
            s[i+1] = towupper(s[i+1]);
        }
    }

    cout << s << endl;
}


int main()
{

    string str = "nazil";

    // cout << str.size() << endl;

    // cout << str[0] << endl;
    // cout << str[str.size()-1] << endl;

    capitalizeEachWord(str);

    return 0;
}