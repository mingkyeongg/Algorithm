#include <iostream>
using namespace std;

int room[51][51] = {0};
int N, M;       // 방의 크기
int rc_x, rc_y; // 로봇청소기 좌표
int rc_dir;     // 로봇청소기 방향
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int cnt = 0;

/*
  0 : 북쪽
  1 : 동쪽
  2 : 남쪽
  3 : 서쪽
*/

bool isValid(int x, int y)
{
  return (x >= 0 && y >= 0 && x < N && y < M);
}

void checkAround(int *x, int *y)
{
  int idx = rc_dir;
  for (int i = 0; i < 4; i++)
  {
    idx = (idx + 3) % 4;
    int next_x = *x + dx[idx];
    int next_y = *y + dy[idx];

    if (isValid(next_x, next_y) && room[next_x][next_y] == 0)
    {
      *x = next_x;
      *y = next_y;
      rc_dir = idx;
      return;
    }
  }

  int back_x = *x - dx[rc_dir];
  int back_y = *y - dy[rc_dir];
  if (isValid(back_x, back_y) && room[back_x][back_y] != 1)
  {
    *x = back_x;
    *y = back_y;
  }
  else
  {
    *x = -1;
    *y = -1;
  }
}

void clean(int x, int y)
{
  int current_x = x;
  int current_y = y;

  while (true)
  {
    if (room[current_x][current_y] == 0)
    {
      room[current_x][current_y] = 2;
      cnt++;
    }

    checkAround(&current_x, &current_y);

    if (current_x == -1 || current_y == -1)
      break;
  }
}

int main()
{
  cin >> N >> M;
  cin >> rc_x >> rc_y >> rc_dir;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> room[i][j];
    }
  }

  clean(rc_x, rc_y);
  cout << cnt;

  return 0;
}
