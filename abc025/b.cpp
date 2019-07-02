#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
using namespace std;

int main() {
  int n,a,b;
  cin >> n >> a >> b;
  int ans=0;
  rep(i,n) {
    string s;
    int d;
    cin >> s >> d;
    if(s=="East"){
      if(d<a) ans+=a;
      else if(b<d) ans+=b;
      else ans+=d;
    }else{
      if(d<a) ans-=a;
      else if(b<d) ans-=b;
      else ans-=d;
    }
  }
  if(ans>0) {
    cout << "East" << " " << ans << endl;
  }else if(ans<0){
    cout << "West" << " " << -ans << endl;
  }else{
    cout << 0 << endl;
  }
}
