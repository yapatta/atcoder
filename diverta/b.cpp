#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll r,g,b,N;
  cin >> r >> g >> b >> N;
  ll cnt = 0;
  for(ll i=0;i*r<=N;i++){
    for(ll j=0;j*g<=N-i*r;j++){
      ll tmp = N-i*r-j*g;
      if(tmp%b==0) {
        cnt++;
      }

    }
  }
  cout << cnt << endl;
}
