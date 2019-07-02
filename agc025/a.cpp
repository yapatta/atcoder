#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(X) (x).begin(),(x).end()
using namespace std;

ll sumKeta(ll x){
  ll sum=0;
  while(1){
    sum += x%10;
    x/=10;
    if(x==0){
      break;
    }
  }
  return sum;
}

int main() {
  ll N;
  cin >> N;
  ll min=sumKeta(1)+sumKeta(N-1);
  for(ll i=2;i<=N/2;i++){
    ll tmp=sumKeta(i)+sumKeta(N-i);
    if(tmp<min){
      min=tmp;
    }
  }
  cout << min << endl;
}
