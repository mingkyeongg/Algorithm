#include <iostream>

using namespace std;

typedef long long ll;

ll A, B; // 두 수

int main(void)
{
  cin >> A >> B;

  ll mod;
  ll gcd;
  ll a = A;
  ll b = B;

  while (true)
  {
    mod = a % b;

    if (mod == 0)
    {
      gcd = b;
      break;
    }
    a = b;
    b = mod;
  }

  cout << (A * B) / gcd;
}