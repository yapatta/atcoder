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
#define MAX 12
using namespace std;
ll P[MAX],C[MAX];
ll D, G;

ll bun(int i, int p, ll max, ll count) {
  if(max>=G) return count;
  else if(i > D) return 1000000000;
  else if(p == P[i]) return bun(i+1, 0, max+C[i], count);
  else return min( bun(i, p+1, max+i*100, count+1), bun(i+1, 0, max, count));
}

int main() {
  int i;
  cin >> D >> G;
  for(i=1;i<=D;i++) {
    cin >> P[i] >> C[i];
  }
  cout << bun(1, 0, 0, 0) << endl;
  return 0;
}
