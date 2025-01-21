#include <iostream>
#include <set>
#include <string>

using namespace std;
set<string> s;

int main(void)
{
  string str;
  cin >> str;

  for (int i = 0; i <= str.length() - 1; i++)
  {
    for (int j = i + 1; j <= str.length(); j++)
    {
      s.insert(str.substr(i, j - i));
    }
  }

  cout << s.size();
}