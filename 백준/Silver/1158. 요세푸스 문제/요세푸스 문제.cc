#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> ans;

void print(void)
{
  cout << "<";
  for (int i = 0; i < ans.size() - 1; i++)
  {
    cout << ans[i] << ", ";
  }
  cout << ans[ans.size() - 1] << ">";
}

int main(void)
{
  cin >> N >> K;
  vector<int> arr(N, 1);
  int current = K - 1;
  arr[K - 1] = 0;
  ans.push_back(K);
  int temp = 0;

  while (ans.size() < N)
  {
    temp += arr[current];
    if (temp == K)
    {
      ans.push_back(current + 1);
      arr[current] = 0;
      temp = 0;
    }
    current = (current + 1) % N;
  }
  print();
}