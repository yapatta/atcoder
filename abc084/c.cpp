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
  vector<ll> c(N),s(N),f(N);
  for(int i=0;i<N-1;i++) {
    cin >> c[i] >> s[i] >> f[i];
  }
  for(ll i=0;i<N;i++){
    ll t = 0;
    for(ll j=i;j<N-1;j++){
      if(t<s[j]) t = s[j];
      else if(t%f[j]==0) ;
      else t = (t+f[j]) - (t%f[j]);
      t += c[j];
    }
    cout << t << endl;
  }
}
