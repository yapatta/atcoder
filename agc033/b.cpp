#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
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
const int dx[4]={-1, 0, 1, 0};
const int dy[4]={0, -1, 0, 1};

signed main(){
  ll H,W,N;
  ll sr,sc;
  string S,T;
  cin >> H >> W >> N;
  cin >> sr >> sc;
  cin >> S >> T;
  bool flag = true;

  //右に落としたい
  ll x = sc;
  for(ll i=0;i<N;i++){
    if(S[i]=='R') x++;
    if(x==W+1){
      flag = false;
    }
    if(T[i]=='L' && x>=2) x--;
  }
  //左に落としたい
  x = sc;
  for(ll i=0;i<N;i++){
    if(S[i]=='L') x--;
    if(x==0){
      flag = false;
    }
    if(T[i]=='R' && x<=W-1) x++;
  }

  ll y=sr;
  //上に落としたい
  for(ll i=0;i<N;i++){
    if(S[i]=='D') y++;
    if(y==H+1){
      flag = false;
    }
    if(T[i]=='U' && y>=2) y--;
  }
  //下に落としたい
  y=sr;
  for(ll i=0;i<N;i++){
    if(S[i]=='U') y--;
    if(y==0){
      flag = false;
    }
    if(T[i]=='D' && y<=H-1) y++;
  }

  cout << (flag?"YES":"NO") << endl;
}
