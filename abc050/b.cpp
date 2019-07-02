#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  ll N,M;
  cin >> N;
  vector<ll> t(N);
  ll ans=0;
  for(ll i=0;i<N;i++) {
    cin >> t[i];
    ans += t[i];
  }
  cin >> M;
  vector<ll> p(M),x(M);
  for(ll i=0;i<M;i++) {
    ll temp=ans;
    ll p,x;
    cin >> p >> x;
    temp = temp-t[p-1]+x;
    cout << temp << endl;
  }
}
