#include <iostream>

using namespace std;

int T; // 테스트케이스

int main(void)
{
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    int m;
    int sum = 0;
    int min_sum = 0;
    cin >> m;
    int sum_in = 0, sum_out = 0;
    for (int j = 0; j < m; j++)
    {
      int in, out;
      cin >> in >> out;
      sum += (in - out);
      min_sum = min(sum, min_sum);
    }
    cout << abs(min_sum) << '\n';
  }
}