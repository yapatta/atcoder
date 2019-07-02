#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll N;
  cin >> N;
  vector<ll> t(N+1),x(N+1),y(N+1);
  t[0]=0,x[0]=0,y[0]=0;
  for(int i=1;i<=N;i++) {
    cin >> t[i] >> x[i] >> y[i];
  }
  bool flag=true;
  for(int i=1;i<=N;i++) {
    //距離的に間に合わない
    if( (t[i]-t[i-1])<(llabs(x[i]-x[i-1]) + llabs(y[i]-y[i-1]))) {
      flag=false;
      break;
    }
    //距離的には間に合うが、偶奇が異なる
    if( (t[i]-t[i-1])%2 != (llabs(x[i]-x[i-1]) + llabs(y[i]-y[i-1])) %2 ) {
      flag=false;
      break;
    }
  }
  if(flag) cout << __TRUE << endl;
  else cout << __FALSE << endl;
}
