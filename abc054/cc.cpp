#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;
const int nmax=8;
bool graph[nmax][nmax];

int dfs(int v,int N,bool visited[nmax]){
  bool all_visited=true;
  for(int i=0;i<N;i++){
    if(visited[i]==false){
      all_visited=false;
    }
  }
  if(all_visited){
    return 1;
  }
  int ret=0;
  for(int i=0;i<N;i++){
    if(graph[v][i]==false) continue;
    if(visited[i]) continue;

    visited[i]=true;
    ret+=dfs(i,N,visited);
    visited[i]=false;
  }
  return ret;
}

int main() {
  int N,M;
  cin >> N >> M;
  rep(i,M){
    int a,b;
    cin >> a >> b;
    graph[a-1][b-1]=graph[b-1][a-1]=true;
  }
  bool visited[nmax];
  fill(visited,visited+N,false);
  visited[0]=true;
  cout << dfs(0,N,visited) << endl;
}
