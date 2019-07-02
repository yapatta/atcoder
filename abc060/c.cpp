#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ll N,T,sum=0;
  cin >> N >> T;
  vector<ll> t(N);
  for(ll i=0;i<N;i++){
    cin >> t[i];
  }
  for(ll i=0;i<N-1;i++){
    ll tmp=t[i+1]-t[i];
    if(tmp<T){
      sum+=tmp;
    }else{
      sum+=T;
    }
  }
  sum+=T;
  cout << sum << endl;
}
