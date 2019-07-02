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
  int n,t;
  cin >> n >> t;
  int a, b;
  int min=1005;
  for(int i=0;i<n;i++) {
    cin >> a >> b;
    if(min>a && t>=b) {
      min=a;
    }
  }
  if(min==1005) cout << "TLE" << endl;
  else cout << min << endl;
  return 0;
}
