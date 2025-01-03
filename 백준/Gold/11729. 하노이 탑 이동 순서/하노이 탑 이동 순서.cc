#include <iostream>
#include <cmath>

using namespace std;

int N;

void hanoi(int n, int start, int to, int via)
{
  if (n == 1)
  {
    cout << start << " " << to << '\n';
    return;
  }
  else
  {
    hanoi(n - 1, start, via, to);
    cout << start << " " << to << '\n';
    hanoi(n - 1, via, to, start);
  }
}

int main(void)
{
  cin >> N;
  cout << (unsigned long)pow(2, N) - 1 << '\n';
  hanoi(N, 1, 3, 2);
}