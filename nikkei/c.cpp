#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main() {
  ll N,sum=0;
  cin >> N;
  vector<ll> a(N),b(N),ab(N);
  for(ll i=0;i<N;i++) {
    cin >> a[i] >> b[i];
    sum -= b[i];
    ab[i] = a[i]+b[i];
  }
  sort(ab.begin(),ab.end());
  for(int i=0;i<N;i+=2) {
    sum+=ab[N-1-i];
  }
  cout << sum << endl;
}
