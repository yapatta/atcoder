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
#define MAX 105
using namespace std;

int main() {
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  int f = a[2]*10+a[1];
  cout << a[0]+f << endl;
  return 0;
}
