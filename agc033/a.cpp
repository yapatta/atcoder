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

int h,w;
char c[1005][1005];

const int dx[4]={-1, 0, 1, 0};
const int dy[4]={0, -1, 0, 1};

int main(){
	cin >> h >> w;
  queue<tuple<int,int,int>> q;
  int cnt = 0;

  rep(i,h){
    rep(j,w){
      cin >> c[i][j];
      if(c[i][j]=='#'){
        q.push(make_tuple(i,j,0));
      }else{
        cnt++;
      }
    }
  }
  int ans = 0;

  while(!q.empty() && cnt){
    tuple<int,int,int> tmp = q.front();
    q.pop();
    int ctmp = get<2>(tmp);
    int tx,ty;
    for(int i=0;i<4;i++){
      ty = get<0>(tmp) + dy[i];
      tx = get<1>(tmp) + dx[i];

      if(ty>=0 && ty<h && tx>=0 && tx<w && c[ty][tx]=='.'){
        q.push(make_tuple(ty,tx,ctmp+1));
        c[ty][tx] = '#';
        cnt--;
        if(cnt==0){
          ans = ctmp+1;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}
