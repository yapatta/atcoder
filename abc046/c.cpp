#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  return a*b/gcd(a,b);
}

int main() {
  ll N,lt,la;
  cin >> N;
  cin >> lt >> la;
  for(int i=1;i<N;i++) {
    ll t,a,tmp,tmp2;
    cin >> t >> a;
    if(lt<=t&&la<=a) {
      lt=t;
      la=a;
    }else if(lt<t&&la>a) {
      tmp=la/a;
      if(la%a!=0) tmp++;
      lt=t*tmp;
      la=a*tmp;
    }else if(la<a&&lt>t) {
      tmp=lt/t;
      if(lt%t!=0) tmp++;
      lt=t*tmp;
      la=a*tmp;
    }else {
      tmp=lt/t;
      if(lt%t!=0) tmp++;
      tmp2=la/a;
      if(la%a!=0) tmp2++;
      //cout << tmp << " " << tmp2 << endl;
      if(la>a*tmp) {
        lt=t*tmp2;
        la=a*tmp2;
        continue;
      }
      if(lt>t*tmp2) {
        lt=t*tmp;
        la=a*tmp;
        continue;
      }
      if(t*tmp+a*tmp<t*tmp2+a*tmp2) {
        lt=t*tmp;
        la=a*tmp;
      }else {
        lt=t*tmp2;
        la=a*tmp2;
      }
    }
  }
  cout << lt+la << endl;
}
