#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  ll n;
  cin >> n;
  vector<string> s(n);
  vector<ll> p(n);
  cin >> s[0] >> p[0];
  string maxS=s[0];
  ll max=p[0],sum=p[0];
  for(int i=1;i<n;i++) {
    cin >> s[i] >> p[i];
    if(max<p[i]) {
      maxS=s[i];
      max=p[i];
    }
    sum += p[i];
  }
  if(max*2>sum) {
    cout << maxS << endl;
  }else{
    cout << "atcoder" << endl;
  }
}
