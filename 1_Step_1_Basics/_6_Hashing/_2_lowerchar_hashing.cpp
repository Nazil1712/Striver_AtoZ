#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[26] = {0};

    string str;
    cout << "Enter a string : ";
    cin >> str;


    // PreStoring...
    for(int i=0; i<str.size(); i++) {
        arr[str[i] - 'a']++;
    }

    int q;
    cout << "Enter Query length : ";
    cin >> q;


    while(q--) {
        char ch;
        cin >> ch;

        // Fetching...
        cout << "The character \"" << ch << "\" appears " << arr[ch - 'a' ]  << " times "<< endl;
     }

    return 0;
}