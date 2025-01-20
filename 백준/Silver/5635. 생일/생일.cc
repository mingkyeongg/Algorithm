#include <iostream>
#include <string>

using namespace std;
int min_birth = 2147483647;
string min_name;
int max_birth = 0;
string max_name;

void input(void)
{
  string name;
  string day, month, year;

  cin >> name >> day >> month >> year;

  if (day.length() == 1)
  {
    day = "0" + day;
  }
  if (month.length() == 1)
  {
    month = "0" + month;
  }

  string birth = year + month + day;
  if (stoi(birth) < min_birth)
  {
    min_name = name;
    min_birth = stoi(birth);
  }
  if (stoi(birth) > max_birth)
  {
    max_name = name;
    max_birth = stoi(birth);
  }
}

int main(void)
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    input();
  }

  cout << max_name << '\n'
       << min_name;
}