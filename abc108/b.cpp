#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 200005
using namespace std;
struct point {int x, y;};
int main() {
  point a, b, c, d;
  cin >> a.x >> a.y >> b.x >> b.y;
  c.x = b.x-b.y+a.y;
  c.y = b.x+b.y-a.x;
  d.x = c.x-c.y+b.y;
  d.y = c.x+c.y-b.x;
  cout << c.x << " " << c.y << " " << d.x << " " << d.y << endl;
  return 0;
}
