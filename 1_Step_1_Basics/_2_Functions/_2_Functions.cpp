#include<bits/stdc++.h>
using namespace std;

// 1)
int sum(int num1, int num2){
  return num1+num2;
}


// 2)
/* 
  In this my_max function suppose 
  n2 > n1 then we have not defined any condition for it
  so in that case compiler will return some garbage value!
  REMEMBER THIS
*/
int my_max(int n1, int n2){
  if(n1 >= n2) return n1;
}


// 3) 
// pass by value
void  doSomething(int num){
  cout << num << endl; // 10
  num += 5; 
  cout << num << endl; // 15
  num += 5; 
  cout << num << endl; // 20
}

int main(){

  // 1)
 /*  int n1, n2;
  cout << "Enter the n1 : ";
  cin >> n1;
  cout << "Enter the n2 : ";
  cin >> n2;

  cout << sum(n1,n2) << endl; */


  // 3)
  int num = 10;
  doSomething(num);
  cout << num << endl;

  return 0;
}