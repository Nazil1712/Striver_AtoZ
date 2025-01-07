#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    q.back() = q.back() + 6;

    cout << q.back() << endl; //9

    cout << q.front() << endl; //1

    q.pop(); // pops out 1 beacause it's Queue

    cout << q.front() << endl; // 2


    return 0;
}