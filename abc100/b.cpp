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
  int d, n,s=1;
  cin >> d >> n;
  if(n == 100) {
    n = 101;
  }
  for(int i=0;i<d;i++) {
    s *= 100;
  }
  cout << n*s << endl;
  return 0;
}
