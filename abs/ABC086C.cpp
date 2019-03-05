#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <array>
#include <list>
#include <stack>
#include <valarray>

using namespace std;

typedef unsigned uint;
typedef long long Int;
typedef unsigned long long UInt;

const int INF = 1001001001;
const Int INFLL = 1001001001001001001LL;

#define show(x) cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
template<typename T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<typename T> void chmin(T& a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T& a, T b) { if (a < b) a = b; }
int in() { int x; scanf("%d", &x); return x; }
double fin() { double x; scanf("%lf", &x); return x; }
Int lin() { Int x; scanf("%lld", &x); return x; }

int main() {

  int n = in();

  int prev_t = 0, prev_x = 0, prev_y = 0;
  bool ok = true;
  for (int i = 0; i < n; i++){
    int t = in(), x = in(), y = in();
    int dt = t - prev_t, dx = abs(prev_x - x), dy = abs(prev_y - y);
    int dd = dx + dy;
    if (dt < dd) {
      ok = false;
    }
    if ((dd % 2) != (dt % 2)) {
      ok = false;
    }
    prev_t = t;
    prev_x = x;
    prev_y = y;
  }

  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
