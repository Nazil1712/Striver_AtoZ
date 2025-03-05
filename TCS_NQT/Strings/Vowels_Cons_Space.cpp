#include<bits/stdc++.h>
using namespace std;


void countMyString(string s) {
    int n = s.size();

    int vowels = 0, consonants = 0, Wspaces = 0;

    for(int i=0; i<n; i++) {
        char temp = tolower(s[i]);

        if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
            vowels++;
        }
        else if(temp >= 'a' && temp <= 'z') {
            consonants++;
        } else if(temp == ' ' ) {
            Wspaces++;
        }
    }

    cout << "No of Vowels : " << vowels << endl;
    cout << "No of consonants : " << consonants << endl;
    cout << "No of Wspaces : " << Wspaces << endl;
}


int main() {

    string s  = "Take u forward is Awesome";

    countMyString(s);

    return 0;
}