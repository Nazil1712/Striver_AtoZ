#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<int,int>> v;

    v.push_back({1,2});
    v.emplace_back(3,4);

    for(auto it : v) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}