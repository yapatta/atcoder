#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<ll> a(N),b(N);
  vector<ll> SA;
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }

  ll ans=0,need=0;
  for(int i=0;i<N;i++) {
    cin >> b[i];
    if(a[i]-b[i]>=0) {
      SA.push_back(a[i]-b[i]);
    } else{
      need += (b[i]-a[i]);
      ans++;
    }
  }
  sort(SA.begin(),SA.end());

  while(need>0) {
    if(SA.size()==0) {
      cout << -1 << endl;
      return 0;
    }
    need -= SA[SA.size()-1];
    SA.pop_back();
    ans++;
  }
  cout << ans << endl;
}
