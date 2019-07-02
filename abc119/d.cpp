#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main() {
  ll A,B,Q;
  cin >> A >> B >> Q;
  vector<ll> s(A),t(B);
  rep(i,A){
    cin >> s[i];
  }
  rep(i,B){
    cin >> t[i];
  }
  rep(i,Q){
    vector<ll> ss,tt;
    ll x;
    cin >> x;
    ll ans=LLONG_MAX;
    //神社
    /*
    ll j=0;
    while(s[j]<=x&&j<A){
      j++;
    }
    */
    auto itrS=lower_bound(All(s),x);
    if(itrS-s.begin()>=1) ss.push_back(s[itrS-s.begin()-1]);
    //if(itrS-s.begin()>=2) ss.push_back(s[itrS-s.begin()-2]);
    if(itrS-s.begin()<A) ss.push_back(s[itrS-s.begin()]);
    //if(itrS-s.begin()<A-1) ss.push_back(s[itrS-s.begin()+1]);
    //寺
    /*
    ll k=0;
    while(t[k]<=x&&k<B){
      k++;
    }
    */
    auto itrT=lower_bound(All(t),x);
    if(itrT-t.begin()>=1) tt.push_back(t[itrT-t.begin()-1]);
    //if(itrT-t.begin()>=2) tt.push_back(t[itrT-t.begin()-2]);
    if(itrT-t.begin()<B) tt.push_back(t[itrT-t.begin()]);
    //if(itrT-t.begin()<B-1) tt.push_back(t[itrT-t.begin()+1]);

    for(ll tmpS=0;tmpS<ss.size();tmpS++){
      ll tmpAns=llabs(ss[tmpS]-x);
      for(ll tmpT=0;tmpT<tt.size();tmpT++){
        tmpAns+=llabs(ss[tmpS]-tt[tmpT]);
        if(ans>tmpAns) ans=tmpAns;
        tmpAns-=llabs(ss[tmpS]-tt[tmpT]);
      }
    }
    for(ll tmpT=0;tmpT<tt.size();tmpT++){
      ll tmpAns=llabs(tt[tmpT]-x);
      for(ll tmpS=0;tmpS<ss.size();tmpS++){
        tmpAns+=llabs(ss[tmpS]-tt[tmpT]);
        if(ans>tmpAns) ans=tmpAns;
        tmpAns-=llabs(ss[tmpS]-tt[tmpT]);
      }
    }
    cout << ans << endl;
  }
}
