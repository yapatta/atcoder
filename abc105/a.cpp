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
  int n ,k;
  cin >> n >> k;
  if(n%k==0) cout << 0 << endl;
  else cout << 1 << endl;
  return 0;
}
