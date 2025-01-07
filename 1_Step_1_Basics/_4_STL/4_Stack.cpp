#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    cout << st.top() << endl; //prints 4 (we can't access with index number)

    st.pop(); // pops out the top element (here 4 will be deleted)    

    cout << st.top() << endl; // prints 3

    cout << st.size() << endl; //prints 3(because 3 elements)

    cout << st.empty() << endl;



    stack<int> s1, s2;
    s1.swap(s2);

    
    return 0;
}