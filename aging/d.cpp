#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define MIN -10000000000
#define MAX 10000000000
#define __TRUE "Yes"
#define __FALSE "No"
using namespace std;

ll taka(ll x, vector<ll> a, int size) {
  ll maxTaka=0;
  ll num=0;
  ll c=0,c2=0;
  vector< pair<ll,int> > sa;

  for(int i=0;i<size;i++) {
    sa.push_back( make_pair(llabs(a[i]-x),i) );
  }
  sort(sa.begin(), sa.end());

  while(num<size) {
    while(1) {
      if(a[size-1-c] != MIN) {
        maxTaka += a[size-1-c];
        a[size-1-c] = MIN;
        c++;
        break;
      }
      c++;
    }
    while(1) {
      if(a[sa[c2].second] != MIN) {
        a[sa[c2].second]=MIN;
        c2++;
        break;
      }
      c2++;
    }

    num+=2;
  }
  return maxTaka;
}

int main() {
  ll N,Q;
  cin >> N >> Q;
  vector<ll> a(N);
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }
  for(int i=0;i<Q;i++) {
    ll x;
    cin >> x;
    cout << taka(x,a,N) << endl;
  }
}
