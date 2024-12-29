#include <iostream>
#include <vector>

using namespace std;

unsigned long long cir = 0;
int n;
vector<unsigned long long> fib;

// 1 2 3 5 8

int main(void)
{
  cin >> n;
  fib.push_back(1);
  fib.push_back(1);
  for (int i = 2; i <= n; i++)
  {
    fib.push_back(fib[i - 1] + fib[i - 2]);
  }

  cir = fib[n] * 2 + fib[n - 1] * 2;
  cout << cir;
}