#include <iostream>
#include <vector>

using namespace std;
int N;
vector<int> v;
int ans;              // 정답 기록
int diff = INT32_MAX; // 차이 기록

void print(void)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << '\n';
}

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> N;
  v.push_back(0);

  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    v.push_back(v[v.size() - 1] + x);
  }

  for (int i = 1; i < v.size() - 1; i++)
  {
    if (diff > abs(v[v.size() - 1] - v[i] - v[i]))
    {
      diff = abs(v[v.size() - 1] - v[i] - v[i]);
      ans = i;
    }
  }
  cout << ans;
}