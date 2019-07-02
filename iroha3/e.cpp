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
  char c[N];
  rep(i,N){
    cin >> c[i];
  }
  ll cnt=0,a=0,b=0,i=0;
  while(i<N){
    a = b = 0;
    if(c[i]=='/'){
      while(i<N){
        if(c[i]=='/'){
          a++;
          i++;
        }else{
          break;
        }
      }
      while(i<N){
        if(c[i]=='\\'){
          b++;
          i++;
        }else{
          break;
        }
      }
      if(a==b) {
        cnt++;
      }
    }
    else i++;
  }
  cout << cnt << endl;
}
