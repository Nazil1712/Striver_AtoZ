#include <bits/stdc++.h>
using namespace std;

int main()
{
    // doesn't Obey Uniquness of Keys  rule, It allows duplicate keys
    // Uniqueness (Doesn't obey this rule)
    // Keys are in sorted manner (obey this rule)
    multimap<int,int> m1;


    // Uniqueness (obeys)
    // Keys are in sorted manner (Doesn't obey this rule)
    unordered_map<int,int> m2;


    return 0;
}