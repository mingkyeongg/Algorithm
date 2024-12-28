#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, M; // 숫자 카드의 개수, 구해야 할 숫자 카드의 개수
map<int, bool> m;
vector<int> numbers;

void putMap(void)
{
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    m[x] = true;
  }
}

void findNum(void)
{
  cin >> M;
  for (int i = 0; i < M; i++)
  {
    int x;
    cin >> x;
    if (m[x] == true)
    {
      cout << "1 ";
    }
    else
    {
      cout << "0 ";
    }
  }
}

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  putMap();
  findNum();
}