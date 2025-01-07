#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(1); //{1,1,1,1}

    // ms.erase(1); // {} (will erase all occurences of 1)
    // ms.erase(ms.find(1)); // (Only First occurence of 1 will be deleted)

    for(auto it: ms){
        cout << it << " ";
    }


    // Rest functions are similar to set


    return 0;
}