#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(x) (x).begin(),(x).end()
using namespace std;

int main() {
  ll N,K;
  cin >> N >> K;
  vector<ll> a(N);
  rep(i,N){
    cin >> a[i];
  }
  ll maxSum=0;
  for(ll key=0;key<=K;key++){
    ll tmp=0;
    for(ll num=0;num<N;num++){
      tmp += (key^a[num]);
    }
    if(maxSum<tmp){
      maxSum=tmp;
    }
  }
  cout << maxSum << endl;
}
