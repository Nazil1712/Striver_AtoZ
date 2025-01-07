#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;

    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(2);// {1,2}
    st.insert(1);// {1,2}
    st.insert(3); // {1,2,3}
    st.insert(4); // {1,2,3,4}
    st.insert(9); // {1,2,3,4,9}

    //retunrs an iterator
    auto it = st.find(3);
    // cout << *(it) << endl;

    // IF the element is not present it points to next address of last element 
    // ({1,2,3,4,9} it2)   it2 is over here (Hence it can give output as any value ,garbage,undefined etc...... (Depends on memory State))
    auto it2 = st.find(978);
    // cout << *(it2) << endl;

    int c = st.count(9);
    cout << "Occurrence of 9 is : "<< c << endl; //(because it is present(always one if present beacuse of uniqueness))

    st.erase(9); // 9 is erased
    // Deltets specified element adn maintains sorted order
    // for(auto it : st){
    //     cout << it << " ";
    // }


    c = st.count(9);
    cout << "Occurrence of 9 is : "<< c << endl;


    //erase(), begin(), end() all are similar to vector


    return 0;
}