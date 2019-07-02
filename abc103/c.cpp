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
#define MAX 3005
using namespace std;

int main() {
  int i, n, a, max=0;
  cin >> n;
  for(i=0;i<n;i++) {
    cin >> a;
    max += (a-1);
  }
  cout << max << endl;
  return 0;
}
