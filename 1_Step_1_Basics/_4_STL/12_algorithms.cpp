#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool comp(pair<int,int> p1, pair<int,int>p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //else it is same
    // then if it is same: 

    if(p1.first > p2.first) return true;
    if(p2.first < p2.first) return false;
}

int main()
{
    /* int arr[5] = {4,5,9,2,1};
    // sort(arr, arr+5);//ascending order sort
    sort(arr, arr+5, greater<int>()); // descending order sort
    printArr(arr,5); */


    /* vector<int> v1;
    v1.push_back(5);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(-1);
    sort(v1.begin(), v1.end());
    sort(v1.begin(), v1.end(), greater<int>()); // descending order sort
    for(auto it : v1){
        cout << it << " ";
    }
    cout << endl; */


    //Sort according to my way
   /* 
    Sort it according to second element (ascending)
    if second element is same, then
    Sort it according to first element but in descending 
    */

   /* pair<int, int> p1[] = {{1,2},{2,1},{4,1}};
   sort(p1, p1+3, comp);
    for(auto it : p1){
        cout << it.first << " " << it.second << endl;
    } */


    //__butilin_popcount()
    /* int n = 2;
    int ans = __builtin_popcount(n);
    cout << ans << endl;
    */


    // All permutations
    /* string s ="123";
    sort(s.begin(), s.end()); //necessary to sort

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end())); */

    //To find maximum element from linear datastructure
    int arr[5] = {1,2,10,8,3};
    int maxi = *max_element(arr, arr+5);
    cout << maxi << endl;

    int mini = *min_element(arr,arr+5);
    cout << mini << endl;


    
    return 0;
}