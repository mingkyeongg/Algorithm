#include <iostream>
#include <set>
#include <string>

using namespace std;

set<string> s;

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  int ans = 0;

  cin >> N >> M;

  for (int i = 0; i < N; i++)
  {
    string str;
    cin >> str;

    s.insert(str);
  }

  for (int i = 0; i < M; i++)
  {
    string str;
    cin >> str;
    if (s.find(str) != s.end())
    {
      ans++;
    }
  }

  cout << ans;
}