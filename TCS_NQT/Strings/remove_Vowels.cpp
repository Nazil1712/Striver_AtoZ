#include <bits/stdc++.h>
using namespace std;

/*


    string s1 = "Geeks";
    //           01234

    // Copy two characters of s1 (starting
    // from index 3)
    string r = s1.substr(3, 2);

    string t2 = s1.substr(1);


    cout << t2 << endl; // output : eeks
    cout << r << endl; // output = ks


*/

void removeVowels(string s)
{

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {

            s = s.substr(0, i) + s.substr(i + 1);
            i--;
        }
    }


    cout << s << endl;
}

int main()
{

    string s = "Take U Forward";


    removeVowels(s);

    return 0;
}