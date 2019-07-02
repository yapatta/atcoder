#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 200005
using namespace std;

ll tmp[MAX], ans[MAX];
int main(){
  ll N,Q,l,r;
  cin >> N >> Q;
  rep(i,N){
    tmp[i]=0;
    ans[i]=0;
  }
  rep(i,Q){
    cin >> l >> r;
    tmp[l-1]++;
    tmp[r]--;
  }
  ans[0]=tmp[0];
  for(ll i=1;i<N;i++){
    ans[i] = ans[i-1]+tmp[i];
  }
  for(ll i=0;i<N;i++){
    if(ans[i]%2 == 0){
      cout << 0;
    }else{
      cout << 1;
    }
  }
  cout << endl;
}
