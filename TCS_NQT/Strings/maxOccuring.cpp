#include <bits/stdc++.h>
using namespace std;


void maximumOccuringCharacter(string str) {

    int n = str.size(), maxFrequency = INT_MIN;
    string ans = "";

    int arr[26] = {0};

    for(int i = 0; i<n; i++) {
        int index = str[i] - 'a';
        arr[index]++;
        if(arr[index] > maxFrequency) {
            maxFrequency = arr[index];
            ans = str[i];
        }
    }

    cout << "Maximum occuring character : " << ans << endl;
}

int main()
{   

    string str = "nnaazzzil";


    maximumOccuringCharacter(str);

    return 0;
}