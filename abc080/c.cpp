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
 int N;
 cin >> N;
 vector<vector<ll> > f(N);
 vector<vector<ll> > p(N,vector<ll>(11));
 for(int i=0;i<N;i++){
   for(int j=0;j<10;j++){
     ll a;
     cin >> a;
     f[i].push_back(a);
   }
 }
 for(int i=0;i<N;i++){
   for(int j=0;j<11;j++){
     cin >> p[i][j];
   }
 }
 ll ans = LLONG_MIN;
 vector<ll> a(N);
 for(ll key=1;key<(1<<10);key++){
   ll sum = 0;
   for(ll i=0;i<10;i++){
     if(key&(1<<i)){
       for(ll j=0;j<N;j++){
         if(f[j][i]) a[j]++;
       }
     }
   }
   for(ll i=0;i<N;i++){
     sum += p[i][a[i]];
   }
   if(ans<sum){
     ans = sum;
   }
   for(ll i=0;i<N;i++) a[i]=0;
 }
 cout << ans << endl;
}
