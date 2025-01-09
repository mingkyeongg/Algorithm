#include <iostream>

using namespace std;

int main(void)
{
  int p1_x, p1_y, p2_x, p2_y, p3_x, p3_y;
  cin >> p1_x >> p1_y >> p2_x >> p2_y >> p3_x >> p3_y;

  int rst = (p2_x - p1_x) * (p3_y - p1_y) - (p3_x - p1_x) * (p2_y - p1_y);

  if (rst > 0)
    rst = 1;
  else if (rst < 0)
    rst = -1;

  cout << rst;
}