#include <bits/stdc++.h>
using namespace std;

void removeBrackets(string s){

    int n = s.size();

    for(int i=0; i<n; i++){
        if(s[i] == ')' || s[i]=='(') {
            s = s.substr(0,i) + s.substr(i+1);
            i--;
        }
    }

    cout << s << endl;

}


int main()
{

    string str = "a+((b-c)+d)";

    removeBrackets(str);

    return 0;
}