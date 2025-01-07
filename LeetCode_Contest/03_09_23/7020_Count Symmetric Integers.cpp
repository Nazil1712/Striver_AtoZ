#include <iostream>
#include <string>

using namespace std;

int count_symmetric_integers(int low, int high) {
  int count = 0;
  for (int i = low; i <= high; i++) {
    if (is_symmetric(i)) {
      count++;
    }
  }
  return count;
}

bool is_symmetric(int n) {
  string digits = to_string(n);
  int n_digits = digits.length();
  if (n_digits % 2 == 1) {
    return false;
  } else {
    int sum_left = 0;
    int sum_right = 0;
    for (int i = 0; i < n_digits / 2; i++) {
      sum_left += digits[i] - '0';
      sum_right += digits[n_digits - i - 1] - '0';
    }
    return sum_left == sum_right;
  }
}

int main() {
  int low, high;
  cin >> low >> high;
  cout << count_symmetric_integers(low, high) << endl;
  return 0;
}



// Mine
/* 
bool isSymmetric(int n)
{
    string digit = to_string(n);
    int n_digit = digit.length();

    if (n_digit % 2 != 0)
        return false;
    else
    {
        int left_sum = 0;
        int right_sum = 0;
        for (int i = 0; i < n_digit / 2; i++)
        {
            left_sum += digit[i] - '0';
            right_sum += digit[n - i - 1] - '0';
        }
        return left_sum == right_sum;
    }
}

int countSymmetricIntegers(int low, int high)
{
    int cnt = 0;
    for (int i = low; i <= high; i++)
    {
        if (isSymmetric(i))
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    // int n;
    // cout << "Entre the number n : ";
    // cin >> n;

    // patter1(n);

    int low, high;
    cin>>low>>high;
    cout << countSymmetricIntegers(low,high) << endl;
    return 0;
}
 */