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
#define MAX 15
using namespace std;
int main() {
  int n, s;
  cin >> n;
  int t=n/100;
  s = 111*t;
  if(n <= s) cout << s << endl;
  else {
    s = 111*(t+1);
    cout << s << endl;
  }

  return 0;
}
