#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  vector<vector<int> > connect(N,vector<int>());
  vector<int> a(M),b(M);
  rep(i,M){
    cin >> a[i] >> b[i];
    a[i]--,b[i]--;
    connect[a[i]].push_back(b[i]);
    connect[b[i]].push_back(a[i]);
  }
  int ans=0;
  while(true){
    vector<int> graph;
    rep(i,N){
      if(connect[i].size()==1){
        graph.push_back(i);
      }
    }
    if(graph.size()==0) break;
    for(int g : graph){
      if(connect[g].size()==0) break;
      auto itr=find(connect[connect[g][0]].begin(),connect[connect[g][0]].end(),g);
      connect[connect[g][0]].erase(itr);
      connect[g].clear();
      ans++;
    }
    graph.clear();
  }
  cout << ans << endl;
}
