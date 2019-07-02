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

int main() {
  int i;
  string s, t, f;
  bool x=false;
  cin >> s >> t;
  f=s;
  for(i=0;i<s.size();i++) {
    f = f.substr(1)+f[0];
    if(f==t) {
      x=true;
      break;
    }
  }
  if(x) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
