#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int s = 0, e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    cout << "The index if 2 is : " << binarySearch(even, 6, 2) << endl;
    cout << "The index of 16 is : " << binarySearch(odd, 5, 16) << endl;

    return 0;
}