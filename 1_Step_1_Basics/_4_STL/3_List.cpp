#include <bits/stdc++.h>
using namespace std;

int main()
{   

    list<int> ls;

    ls.push_back(5);
    ls.push_front(4);

    for(auto it : ls){
        cout << it << " ";
    }cout << endl;


    list<int> ls2(4,100);
    for(auto it : ls2){
        cout << it <<  " ";
    }cout << endl;

    

    return 0;
}