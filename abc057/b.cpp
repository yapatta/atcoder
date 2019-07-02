#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;
  vector<ll> a(n),b(n),c(m),d(m);
  for(int i=0;i<n;i++) {
    cin >> a[i] >> b[i];
  }
  for(int i=0;i<m;i++) {
    cin >> c[i] >> d[i];
  }
  for(int i=0;i<n;i++) {
    ll ans=0,num=0,min=llabs(a[i]-c[0])+llabs(b[i]-d[0]);
    for(int j=1;j<m;j++) {
      ans = llabs(a[i]-c[j])+llabs(b[i]-d[j]);
      if(ans<min) {
        min=ans;
        num=j;
      }
    }
    cout << num+1 << endl;
  }
}
