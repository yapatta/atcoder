#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

ll a[1005];
int main(){
  ll N,ans=1;
  cin >> N;
  memset(a,0,sizeof(a));
  for(int i=2;i<=N;i++){
    int tmp=i;
    for(int j=2;j<=i&&tmp!=1;j++){
      while(tmp%j==0){
        a[j]++;
        tmp/=j;
      }
    }
  }
  for(int i=2;i<=N;i++){
    ans*=(a[i]+1);
    ans%=MOD;
  }
  cout << ans << endl;
}
