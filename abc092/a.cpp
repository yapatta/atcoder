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
char S[MAX][MAX];
int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int x,y;
  x=min(a,b);
  y=min(c,d);
  cout << x+y << endl;
  return 0;
}
