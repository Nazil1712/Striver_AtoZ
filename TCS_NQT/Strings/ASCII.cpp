#include<iostream>
using namespace std;


void giveMeAscii(char ch) {

    int asciiValue = ch;

    cout << asciiValue << endl;
}


int main() {

    char ch = 'a';

    giveMeAscii(ch);

    return 0;
}