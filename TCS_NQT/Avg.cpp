#include <bits/stdc++.h>
using namespace std;



void Avg(int arr[], int n) {
    double sum = 0;

    for(int i=0; i<n; i++) {
        sum += (double)arr[i];
    }

    double ans = sum / n;

    cout << "Average is " << ans << endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    int arr2[6] = {1,2,1,1,5,1};


    Avg(arr,5);
    Avg(arr2,6);

    return 0;
}