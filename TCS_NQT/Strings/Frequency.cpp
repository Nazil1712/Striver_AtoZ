#include <bits/stdc++.h>
using namespace std;

void frequencyOfCharacters(string str)
{
    int arr[26] = {0};

    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        // int index = (int)str[i] - 97;
        int index = (int)str[i] - 'a';
        arr[index]++;
    }

    // cout << (int)str[n - 1] - 97 << endl;
    // arr
    for (int i = 0; i < 26; i++)
    {
        // char ch = i+97;
        char ch = i+'a';
        if(arr[i]!=0) {
            cout << ch << arr[i] << " ";
        }
    }
}

int main()
{

    string str = "takeuforward";

    frequencyOfCharacters(str);

    return 0;
}