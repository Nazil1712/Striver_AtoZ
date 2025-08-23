#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2)
{
    int arr1[26] = {0};
    int arr2[26] = {0};

    int n1 = str1.size();
    int n2 = str2.size();

    if(n1 != n2) return false;

    for (int i = 0; i < n1; i++)
    {
        int index1 = (int)str1[i] - 'A';
        int index2 = (int)str2[i] - 'A';

        arr1[index1]++;
        arr2[index2]++;
    }


    for (int i = 0; i < 26; i++)
    {
        if(arr1[i]!=arr2[i]) return false;
    }

    return true;
}

int main()
{

    string str1 = "INTEGER";
    string str2 = "TEGERNI";

    bool ans = isAnagram(str1, str2);

    // cout << ans << endl;
    if(ans) {
        cout << "provided strings are anagram " << endl;
    }
    else{
        cout << "provided strings are not anagram " << endl;
    }

    return 0;
}