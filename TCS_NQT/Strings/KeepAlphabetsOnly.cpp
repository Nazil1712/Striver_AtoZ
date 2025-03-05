#include <bits/stdc++.h>
using namespace std;


// ABCDEFGHI JKLMNOPQRS TUVWXYZ
// 123456789 0123456789 0123456


// 26 Letters are there
// ASCII    Value
// A        65 
// Z        90
// a        97
// z        122

void keepAlphabetsOnly(string &s) {
    int n = s.size(), index = 0;

    for(int i=0; i<n; i++) {
        int ascii = (int) s[i];

        if((ascii >= 65 && ascii <= 90 )|| (ascii >= 97 && ascii<=122)) {
            s[index++] = s[i];
        }
    }

    s.resize(index);
}


int main()
{

    string str =  "take12% *&u ^$#forward";

    keepAlphabetsOnly(str);

    cout << str << endl;

    return 0;
}