#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  double n,m;
  cin >> n >> m;
  if(n>=12) {
    n=n-12;
  }
  //nとmを分単位に
  n=(n+m/60)*5;
  double ans=abs(n-m)*6;
  printf("%.5f\n", min(ans,360-ans));
}
