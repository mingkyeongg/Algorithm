#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
map<string, vector<string>> team;
map<string, string> member;

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  cin >> N >> M;

  for (int i = 0; i < N; i++)
  {
    string t;
    cin >> t;
    int cnt;
    cin >> cnt;
    for (int j = 0; j < cnt; j++)
    {
      string mem;
      cin >> mem;
      team[t].push_back(mem);
      member[mem] = t;
    }
    sort(team[t].begin(), team[t].end());
  }

  for (int i = 0; i < M; i++)
  {
    string quiz;
    cin >> quiz;
    int flag;
    cin >> flag;
    if (flag)
    {
      cout << member[quiz] << '\n';
    }
    else
    {
      for (int j = 0; j < team[quiz].size(); j++)
      {
        cout << team[quiz][j] << '\n';
      }
    }
  }
}