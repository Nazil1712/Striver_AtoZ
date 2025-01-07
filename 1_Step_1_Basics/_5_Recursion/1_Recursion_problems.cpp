#include <bits/stdc++.h>
using namespace std;

// 1)
void printName(string name, int n) {
    if(n==0) return;

    cout << name << " ";
    printName(name,n-1);
}

// 2)
void print_one_to_n(int i, int n) {
    if(i > n) return;

    cout << i << " ";

    print_one_to_n(i+1,n);
}

// 3)
void print_n_to_one(int i, int n){
    if(i < 1) return;

    cout << i << " ";

    print_n_to_one(i-1,n);
}


// 4) BackTracking 1 to n
void back_one_to_n(int i, int n){
    if(i < 1) return;

    back_one_to_n(i-1,n);

    cout << i << " ";
}


// 5) BackTracking n to 1
void back_n_to_one(int i, int n){
    if(i > n) return;

    back_n_to_one(i+1, n);

    cout << i << " ";
}

// 6) CodeStudio 1 to n (Please try to understand simple logic)
vector<int> printNos(int n) {
    if(n==1) return {1};

    vector<int> ans = printNos(n-1);
    ans.push_back(n);

    return ans;
}



// 7) Reverse an Array
void reverseArray(int i, int arr[], int n){
    //BaseCase
    if(i == n/2) return;

    swap(arr[i], arr[n-i-1]);

    reverseArray(i+1,arr,n);
}



int main()
{
    // int n;
    // cout << "Enter the value of n: ";
    // cin>>n;

    // printName("Nazil",n);
    // print_one_to_n(1,n);
    // print_n_to_one(n,n);
    // back_one_to_n(n,n);
    // back_n_to_one(1,n);

    // 6)
    // vector<int> ans = printNos(n);
    // for(auto it : ans) {
    //     cout << it << " ";
    // }

    // 7)
    int arr[5] = {4,8,6,2,1};
    int n = 5;
    reverseArray(0,arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout<<endl;


    return 0;
}