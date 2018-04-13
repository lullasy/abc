#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
  string input;

  cin >> input;

  sort(input.begin(), input.end());
  if (input == "abc"){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}