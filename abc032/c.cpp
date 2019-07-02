#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;

int main() {
  ll N,K;
  cin >> N >> K;
  vector<ll> s(N);
  bool flag=false;
  rep(i,N){
    cin >> s[i];
    if(s[i]==0){
      flag=true;
    }
  }
  if(flag) {
    cout << N << endl;
    return 0;
  }
  if(K==0){
    cout << 0 << endl;
    return 0;
  }
  //[f,l)
  vector<ll> count;
  ll f=0,l=1,sum=s[0],max=0;
  while(l<=N){
    if(sum>K){
      if(l-f>=1){
        sum/=s[f];
        f++;
      }
    }else{
      if(l-f>max) max=l-f;
      sum*=s[l];
      l++;
    }
  }
  cout << max << endl;
}
