#include <bits/stdc++.h>
using namespace std;


vector<int> getFloorAndCeil(vector<int> arr, int x) {

    int low = 0, n = arr.size(), high = n-1;
    vector<int> ans(2,-1);


    // Code For Floor
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] <= x) {
            ans[0] = arr[mid];
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }



    // Code for Ceil
    low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= x) {
            ans[1] = arr[mid];
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return ans;
}


int main()
{

    // vector<int> arr = {3, 4, 4, 7, 8, 10};
    vector<int> arr = {10,20,30,40,50};
    int x = 25;

    vector<int> ans = getFloorAndCeil(arr,x);

    cout << "Floor ==> " << ans[0] << endl;
    cout << "Ceil  ==> " << ans[1] << endl;

    return 0;
}