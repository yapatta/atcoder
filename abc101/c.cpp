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
#define MAX 100005
using namespace std;
ull A;
int main() {
  ull k, n;
  cin >> n >> k;
  for(int i=0;i<n;i++) {cin >> A;}
  if((n-1)%(k-1) == 0)cout << (n-1)/(k-1) << endl;
  else cout << (n-1)/(k-1)+1 << endl;
  return 0;
}
