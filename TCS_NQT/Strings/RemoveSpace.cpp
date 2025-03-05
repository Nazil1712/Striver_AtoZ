#include <bits/stdc++.h>
using namespace std;


void reomveWhiteSpace(string s) {
    int n = s.size(), index = 0;

    for(int i=0; i<n; i++) {
        if(s[i] != ' ') {
            s[index] = s[i];
            index++;
        }
        
    }
    
    s.resize(index); // It will resize the string to a lentgth given to the function

    cout << s << endl;
} 


int main()
{

    string s = "Take You Forward";

    reomveWhiteSpace(s);

    return 0;
}