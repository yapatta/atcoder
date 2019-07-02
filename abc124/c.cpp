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
  string s;
  cin >> s;
  ll n = s.size();
  char r[n],t[n];
  rep(i,n){
    if(i%2==0){
      r[i] = '0';
      t[i] = '1';
    }else{
      r[i] = '1';
      t[i] = '0';
    }
  }
  ll a=0,b=0;
  rep(i,n){
    if(s[i]!=r[i]) a++;
    if(s[i]!=t[i]) b++;
  }
  cout << min(a,b) << endl;
}
