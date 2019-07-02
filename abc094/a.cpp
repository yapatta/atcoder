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
#define __TRUE "YES"
#define __FALSE "NO"
#define cout(x) cout << (x) << endl
#define reps(i,s,n) for(i=s;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;

int main() {
  int a,b,x;
  cin >> a >> b >> x;
  if(a<=x && x<=a+b) {
    cout(__TRUE);
  }else {
    cout(__FALSE);
  }
  return 0;
}
