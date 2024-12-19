#include <iostream>
#include <vector>

using namespace std;

int fibDp(int n)
{
  vector<int> v(n + 1);
  if (n <= 2)
  {
    return 1;
  }
  v[1] = 1;
  v[2] = 1;
  for (int i = 3; i <= n; i++)
  {
    v[i] = v[i - 1] + v[i - 2];
  }
  return v[n];
}

int main()
{
  int n;
  cin >> n;

  cout << fibDp(n) << " " << n - 2;

  return 0;
}