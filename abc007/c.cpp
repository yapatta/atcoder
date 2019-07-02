#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;

int R,C;
int data[55][55]; //グラフデータを数字に置き換えたもの
int ans[55][55]; //距離の訪問状態を管理

void bfs(int stY,int stX,int goY,int goX){
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      ans[i][j]=INT_MAX;
    }
  }
  ans[stY][stX]=0;
  queue<pair<int,int> > q;
  q.push(make_pair(stY,stX));
  int u;
  int y[] = {1,0,-1,0};
  int x[] = {0,1,0,-1};
  while(!q.empty()){
    pair<int,int> u = q.front();
    q.pop();
    //一番早く探索できたのが最小
    //だから、最小の吟味は必要ない!!
    if(u.first==goY && u.second==goX) break;
    for(int i=0;i<4;i++){
      if(data[u.first+y[i]][u.second+x[i]] && ans[u.first+y[i]][u.second+x[i]]==INT_MAX) {
        ans[u.first+y[i]][u.second+x[i]] = ans[u.first][u.second]+1;
        q.push(make_pair(u.first+y[i],u.second+x[i]));
      }
    }
  }
  rep(i,R){
    rep(j,C){
      if(data[i][j])cout << ans[i][j];
      else cout << "#";
      cout << " ";
    }
    cout << endl;
  }

  cout << ans[goY][goX] << endl;
}

int main(){
  cin >> R >> C;
  int stY,stX;
  cin >> stY >> stX;
  stY--;
  stX--;
  int goY,goX;
  cin >> goY >> goX;
  goY--;
  goX--;
  char inp[R][C];
  for(int y=0;y<R;y++){
    cin >> inp[y];
  }
  //グラフデータを数字で置き換え
  for(int y=0;y<R;y++){
    for(int x=0;x<C;x++){
      if(inp[y][x]=='.') data[y][x]=1;
      else data[y][x]=0;
    }
  }
  
  bfs(stY,stX,goY,goX);
}
