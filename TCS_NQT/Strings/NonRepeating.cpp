#include <bits/stdc++.h>
using namespace std;


void findNonRepeatingCharacters(string str) {
    int arr[26] = {0};

    int n = str.size();

    for(int i=0; i<n; i++) {
        int ascii = (int)str[i] - 'a';

        arr[ascii]++;
    }


    for(int i=0; i<26; i++) {
        if(arr[i]==1) {
            char ch = i + 97;

            cout << ch << ", ";
        }
    }

    cout << endl;
}


int main()
{

    string str = "google";

    findNonRepeatingCharacters(str);

    return 0;
}