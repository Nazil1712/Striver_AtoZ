#include <bits/stdc++.h>
using namespace std;


void sumOfNumbers(string s) {
    int sum = 0;

    /* 
    
        if input is abc12xyz34

        then 
            ch - '0'
    1 =>    49 - 48  = 1
    2 =>    50 - 48  = 2
    3 =>    51 - 48  = 3 
    4 =>    52 - 48  = 4
         ASCII - ASCII  = int       
    
         
    */

    
    for(char ch : s) {
        if(isdigit(ch)) {
            sum += (ch - '0');
        }
    }

    cout << "Sum of Numbers available in string is : " << sum << endl;
}


int main()
{

    string str = "abc12xyz34";

    sumOfNumbers(str);
    

    return 0;
}