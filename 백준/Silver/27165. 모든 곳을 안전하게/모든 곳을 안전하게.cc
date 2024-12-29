#include <iostream>
#include <vector>

using namespace std;

int n;                  // 칸의 개수
int dice;               // 주사위의 눈
vector<int> board;      // 보드
vector<int> one;        // 1의 위치 기록
int ans1 = 0, ans2 = 0; // 정답 기록

int main(void)
{
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    int x;
    cin >> x;
    if (x == 1)
      one.push_back(i);
    board.push_back(x);
  }
  cin >> dice;
  if (one.size() == 2 && one[1] - one[0] == dice)
  {
    ans1 = one[0];
    ans2 = one[1];
  }
  else if (one.size() == 1)
  {
    if (board[0] > 2 && dice == one[0])
      ans2 = one[0];
    if (one[0] == 0 && board[dice] > 0)
      ans2 = dice;
    for (int i = 0; i <= n; i++)
    {
      if (board[i] > 2 && dice == abs(i - one[0]))
      {
        ans1 = min(i, one[0]);
        ans2 = max(i, one[0]);
      }
    }
  }
  else if (one.size() == 0)
  {
    for (int i = 0; i <= n; i++)
    {
      if (board[i] > 2 && i + dice <= n && board[i + dice] > 0)
      {
        ans1 = i;
        ans2 = i + dice;
      }
    }
  }

  if (ans1 || ans2)
  {
    cout << "YES\n"
         << ans1 << " " << ans2;
  }
  else
  {
    cout << "NO";
  }
}