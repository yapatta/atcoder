#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N,sum=0;
  cin >> N;
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      sum+=i*j;
    }
  }
  ll ans=sum-N;
  for(int i=1;i<=9;i++){
    int j=ans/i;
    if(ans==i*j){
      cout << i << " x " << j << endl;
    }
  }
}
