#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  string x;
  cin >> x;
  ll ans = x.size();
  for(ll i=0;i<x.size()-1;i++){
    if(x[i]=='S' && x[i+1]=='T'){
      ll s = i-1,sc=1;
      while(1){
        if(0<=s){
          if(x[s]=='S') {
            sc++;
            s--;
          }else break;
        }else break;
      }
      ll t = i+2,tc=1;
      if(t<=x.size()-1){
        while(1){
          if(t<=x.size()-1){
            if(x[t]=='T') {
            œ  tc++;
              t++;
            }else break;
          }else break;
        }
      }
      ans -= min(sc,tc)*2;
      i = t-1;
    }
  }
  cout << ans << endl;
}
