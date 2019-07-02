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
#define __TRUE "YES"
#define __FALSE "NO"
#define cout(x) cout << (x) << endl
#define reps(i,s,n) for(i=s;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;

int main() {
  int n,m,x,i;
  cin >> n >> m >> x;
  int lc=0,rc=0;
  rep(i,m) {
    int a;
    cin >> a;
    if(x>a) lc++;
    if(x<a) rc++;
  }
  if(lc<rc) cout(lc);
  else cout(rc);
  return 0;
}
