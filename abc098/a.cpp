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

int main() {
  int a,b;
  cin >> a >> b;
  int wa,sa,seki;
  wa=a+b;
  sa=a-b;
  seki=a*b;
  int m;
  m = max(wa,sa);
  m = max(m, seki);
  cout << m << endl;
  return 0;
}
