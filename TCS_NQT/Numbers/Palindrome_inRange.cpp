#include<iostream>
using namespace std;


void findPalindrome(int min, int max) {
    for(int i=min; i<=max; i++) {
        int temp = i;

        int ans = 0;
        while(temp) {
            int digit = temp % 10;
            ans = (ans*10) + digit;
            temp = temp / 10;
        }

        // cout << ans  << " " << i << endl;
        if(ans==i) { 
            cout << ans << " ";
        }
    }
}


int main() {

    int myMin = 10;
    int myMax = 50;

    findPalindrome(myMin,myMax);

    return 0;
}