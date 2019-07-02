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

//すべてマイナスになった時点で終わり
ull gloomM(ll x[], ll s, int n) {
  ull max=0;
  //すべてマイナスだったらfalse
  bool flag=false;
  for(int i=1;i<=n;i++) {
    x[i] -= s;
    if(x[i] >= 0) {
      max += x[i];
      flag=true;
    }
    else max += -x[i];
  }
  if(flag) return min(gloomM(x,s+1,n), max);
  else return max;
}
//すべてプラスになった時点で終わり
ull gloomP(ll x[], ll s, int n) {
  ull max=0;
  //すべてプラスだったらfalse
  bool flag=false;
  for(int i=1;i<=n;i++) {
    x[i] += s;
    if(x[i] >= 0) max += x[i];
    else {
      max += -x[i];
      flag=true;
    }
  }
  if(flag) return min(gloomP(x,s+1,n), max);
  else return max;
}

int main() {
  ll A[MAX];
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) {
    cin >> A[i];
    A[i] -= i;
  }
  ull p =gloomP(A,0,n);
  ull m =gloomM(A,0,n);
  ull ans = (p<m)?p:m;
  cout << ans << endl;
  return 0;
}
