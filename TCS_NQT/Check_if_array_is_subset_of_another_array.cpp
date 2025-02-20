#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool solve(vector<int>arr1, vector<int>arr2) {
    int i = 0, j = 0;


    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int a1 = arr1.size();
    int a2 = arr2.size();

    while(i < a1 && j < a2) {
        if(arr1[i] < arr2[j]) {
            return 0;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        }
        else{
            i++; j++;
        }
    }

    if(i==a1) return 1;
    else return 0;
}

int main() {


    vector<int> arr1 = {1,3,4,5,2};
    vector<int> arr2 = {11,12,13,15,16};


    if(solve(arr1,arr2)) {
        cout << "arr1[] is a subset of arr2[]" << endl;
    }
    else{
        cout << "arr1[] is not a subset of arr2[]" << endl;
    }



    return 0;
}