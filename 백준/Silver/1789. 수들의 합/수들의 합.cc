#include <iostream>

using namespace std;
typedef unsigned long long ull;

int main(void)
{
  ull num; // 찾아야 하는 수
  cin >> num;
  ull cnt = 0;

  int i = 1;
  while (i <= num)
  {
    if (num == 0)
      break;
    if (num < i)
    {
      num += i;
      i++;
      cnt--;
    }
    else
    {
      num -= i;
      i++;
      cnt++;
    }
  }
  cout << cnt;
}