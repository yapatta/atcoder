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
  int n;
  bool flag=false;
  cin >> n;
  for(int y=0;4*y<=n;y++) {
    if((n-4*y)%7 == 0) {
      flag=true;
      break;
    }

  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
