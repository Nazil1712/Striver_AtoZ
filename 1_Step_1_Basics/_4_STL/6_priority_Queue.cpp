#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1)
    priority_queue<int> pq;

    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(8);
    pq.push(5);    
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;



    // 2)
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(3);
    pq2.push(2);
    pq2.push(8);
    pq2.push(5);    
    cout << pq2.top() << endl;
    pq2.pop();
    cout << pq2.top() << endl;
    

    
    return 0;
}