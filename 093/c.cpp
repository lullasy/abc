#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int a, b, c;
  cin >> a >> b >> c;

  int max_num = max(a, max(b, c));
  // あわないので1つ上のであわせる
  if ((max_num * 3 - (a + b + c)) % 2 == 1) max_num++;

  cout << (max_num * 3 - (a + b + c)) / 2 << endl;
  return 0;
}