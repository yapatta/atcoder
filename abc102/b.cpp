#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <limits>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 100005
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<ull> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  cout << a[n-1]-a[0] << endl;
  return 0;
}
