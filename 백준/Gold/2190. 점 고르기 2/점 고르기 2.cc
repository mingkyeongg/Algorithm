#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

typedef long long ll;

ll height, width;
vector<pair<ll, ll>> dot;
int N;           // 점의 개수
int max_cnt = 0; // 최대 포함된 점의 수

bool isContained(ll base_x, ll base_y, ll range_x, ll range_y, ll x, ll y)
{
  if (x >= base_x && x <= range_x && y >= base_y && y <= range_y)
    return true;
  return false;
}

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> width >> height;
  for (int i = 0; i < N; i++)
  {
    ll x, y;
    cin >> x >> y;
    dot.push_back(make_pair(x, y));
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      ll cross_x = dot[i].first;
      ll cross_y = dot[j].second;
      ll cross_x2 = dot[j].first;
      ll cross_y2 = dot[i].second;
      int cnt1 = 0;
      int cnt2 = 0;
      for (int k = 0; k < N; k++)
      {
        if (isContained(cross_x, cross_y, cross_x + width, cross_y + height, dot[k].first, dot[k].second))
          cnt1++;
        if (isContained(cross_x2, cross_y2, cross_x2 + width, cross_y2 + height, dot[k].first, dot[k].second))
          cnt2++;
      }
      max_cnt = max(max_cnt, max(cnt1, cnt2));
    }
    if (max_cnt == N)
      break;
  }
  cout << max_cnt;
}