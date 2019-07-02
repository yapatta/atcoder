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
const ll MOD=1e9+7;
using namespace std;

signed main(){
  ll N;
  cin >> N;
  ll x=0,y=0,z=0;
  rep(i,N){
    ll a;
    cin >> a;
    if(a%4==0) x++;
    else if(a%2==0) y++;
    else z++;
  }

  if((y>=1 && x>=z) || (y==0 && x+1>=z)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
