#include <iostream>
#include <vector>

using namespace std;

int N;
int max_leng = 1;
vector<int> domino;

int main(void)
{
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    domino.push_back(x);
  }
  for (int i = 0; i < N - 1; i++)
  {
    int start = domino[i];
    int len = 1;
    for (int j = i + 1; j < N; j++)
    {
      if (start >= domino[j])
      {
        len++;
        start += domino[j];
      }
    }
    max_leng = max(len, max_leng);
  }

  cout << max_leng;
}