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
#define MAX 105
using namespace std;

int main() {
  int n,m,x,y;
  cin >> n >> m >> x >> y;
  vector<int> X(n);
  vector<int> Y(m);

  for(int i=0;i<n;i++) {
    cin >> X[i];
  }
  for(int i=0;i<m;i++) {
    cin >> Y[i];
  }
  sort(X.begin(), X.end());
  sort(Y.begin(), Y.end());
  bool flag=false;
  for(int z=x+1;z<=y;z++) {
    if(X[n-1]<z && Y[0]>=z) {
      flag=true;
      break;
    }
  }
  if(flag) cout << "No War" << endl;
  else cout << "War" << endl;

  return 0;
}
