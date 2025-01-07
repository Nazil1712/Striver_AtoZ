#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> us;

    us.insert(5);
    us.insert(4);
    us.insert(1000);
    us.insert(-5);
    us.insert(6);
    us.insert(3);
    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(5);


    for(auto it: us){
        cout << it << " ";
    }

    
    return 0;
}