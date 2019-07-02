#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main() {
  ll N;
  cin >> N;
  vector<ll> a(N);
  rep(i,N){
    cin >> a[i];
  }
  sort(All(a));
  vector<ll> b;
  ll tmp=a[0],count=1;
  for(ll i=1;i<N;i++){
    if(tmp==a[i]){
      count++;
    }else{
      tmp=a[i];
      b.push_back(count);
      count=1;
    }
  }
  b.push_back(count);
  rep(i,b.size()){
    cout << b[i] << endl;
  }

  ll max=0;
  if(b.size()<=2){
    for(ll i=0;i<b.size();i++){
      max+=b[i];
    }
    cout << max << endl;
    return 0;
  }else{
    for(ll i=0;i<=b.size()-3;i++){
      ll tsum=b[i]+b[i+1]+b[i+2];
      if(max<tsum){
        max=tsum;
      }
    }
    cout << max << endl;
  }
}
