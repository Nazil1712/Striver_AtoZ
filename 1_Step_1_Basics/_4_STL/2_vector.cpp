#include <bits/stdc++.h>
using namespace std;

int main()
{


    // 1d and 2d

    vector<int> a(5); 
    // {1,2,3,4,5,6}

    vector<vector<int>> a2;
    //    0    1    2    3    4    5
    //0 {{1},{22},{30},{40},{50},{60}}
    //1 {{2},{12},{31},{41},{51},{61}}
    //2 {{3},{22},{32},{42},{52},{62}}
    //3 {{4},{33},{33},{43},{53},{63}}
    //4 {{5},{43},{34},{44},{54},{64}}


    // 1)
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // 2)
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // here we need to write in {}
    vec.emplace_back(1, 2); // here it is understood automatically by function

    // 3)
    //  vector of size 5, intialized as {100,100,100,100,100}
    vector<int> v3(5, 100);

    // 4)
    //  if we dont't want to initialize, hence now it will be {0,0,0,0,0} or any garbage value (it depends on compiler)
    vector<int> v4(5);

    // 5)
    // {20,20,20,20,20}
    vector<int> v5(5, 20);

    // 6)
    // to copy vector
    vector<int> v6(v3);

    // 7) Iterator
    vector<int>::iterator it = v.begin();
    it++;
    // cout << *(it) << endl;

    vector<int>::iterator it2 = v.end();
    // cout << *(it2) << endl; //garbage value
    it2--;
    // cout << *(it2) << endl;

    // cout << v.front()  << " " << v.back() << endl;

    // 8)
    auto a = "Raj";
    auto b = 5.26;
    auto c = 5;

    // 9)
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    /*  iterates on dataTypes not through address hence no need to write *()
     {1,2,3,4}
      it
    */
    for (auto it : v)
    {
        cout << it << " ";
    }

    // 10) Erasing elements
    //{1,2,3,4}
    v.erase(v.begin() + 1); //{1,3,4}

    // {10,20,12,23,35}
    v.erase(v.begin() + 1, v.begin() + 3); // {10,23,35}
    // It is like slice in python v.erase(start(include), end(excluded))

    // 11)Insert functions
    vector<int> my(2, 100);           //{100,100}
    my.insert(my.begin() + 1, 300);   // {300,100,100}
    my.insert(my.begin() + 1, 2, 10); // {300,10,10,100,100}
    // v.insert(position, number_of_elements_you_want_to_insert, Value you want to insert)

    vector<int> copy(2, 50);                         // {50,50}
    my.insert(my.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}


    // {10,20}
    cout << v.size(); //2

    // {10,20}
    v.pop_back(); // {10} (20 is removed)

    // v1-> {10,20}
    // v2-> {30,40}
    v1.swap(v2); // v1->{30,40}   v2->{10,20}

    v.clear() // clears entire vector

    v.empty() //return true if vector is empty, false otherwise

    

    return 0;
}
