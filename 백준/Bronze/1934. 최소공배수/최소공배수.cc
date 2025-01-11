#include <iostream>

using namespace std;
typedef long long ll;

int gcd(ll A, ll B)
{
  ll a = A, b = B, mod;
  while (true)
  {
    mod = a % b;
    if (mod == 0)
    {
      break;
    }
    a = b;
    b = mod;
  }
  return b;
}

int main(void)
{
  int T;
  cin >> T;

  for (int i = 0; i < T; i++)
  {
    ll A, B;
    cin >> A >> B;
    ll g = gcd(A, B);
    cout << A * B / g << '\n';
  }
}