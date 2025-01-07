#include <bits/stdc++.h>
using namespace std;

int main()
{   
    map<int, int> m1;

    m1[1] = 100;
    m1[5] = -1;

    m1.emplace(2,26);
    m1.insert({3,26});

    // cout << m1[5] << endl;

    //sorted keys (not sorted values)
    for(auto it : m1){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;


    




    return 0;
}