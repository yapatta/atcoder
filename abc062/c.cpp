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
  ll H,W;
  cin >> H >> W;
  if(H%3==0||W%3==0){
    cout << 0 << endl;
    return 0;
  }
  ll ans=max(H,W);
  ll a[3];
  if(H%3!=0){
    ans=min(ans,1*W);
  }
  if(W%3!=0){
    ans=min(ans,1*H);
  }
  for(ll i=1;i<H;i++){
    a[0]=i*W;
    if(W%2==0){
      a[1]=a[2]=(H-i)*(W/2);
    }else{
      a[1]=(H-i)*(W/2);
      a[2]=(H-i)*(W/2+1);
    }
    sort(a,a+3);
    ans=min(ans,a[2]-a[0]);
  }
  for(ll i=1;i<W;i++){
    a[0]=i*H;
    if(H%2==0){
      a[1]=a[2]=(W-i)*(H/2);
    }else{
      a[1]=(W-i)*(H/2);
      a[2]=(W-i)*(H/2+1);
    }
    sort(a,a+3);
    ans=min(ans,a[2]-a[0]);
  }
  cout << ans << endl;
}
