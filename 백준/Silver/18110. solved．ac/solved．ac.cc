#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N;             // 난이도 의견의 개수
vector<int> level; // 난이도 의견

double myRound(double num)
{
  return floor(num + 0.5);
}

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    level.push_back(x);
  }
  sort(level.begin(), level.end());

  int cut = round(N * 0.15);
  double sum = 0;
  double num = level.size() - cut * 2;

  for (int i = cut; i < level.size() - cut; i++)
  {
    sum += level[i];
  }
  if (N)
    cout << round(sum / num) << endl;
  else
    cout << 0;
}