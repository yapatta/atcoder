#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> num(N+1,0);
  vector<vector<int> > node(N+1);

  //node[b]の子要素を追加
  for(int i=2;i<=N;i++){
    int b;
    cin >> b;
    node[b].push_back(i);
  }
  //node[i].size()==0のとき、子要素なしだからnum[i]=1
  //node[i].size()>0のとき、子要素があるから、子要素の最大と最小を探索
  //あとは、DP
  for(int i=N;i>=1;i--){
    if(node[i].size()==0){
      num[i]=1;
    }else if(node[i].size()>0){
      int Max=0,Min=INT_MAX;
      for(int j=0;j<node[i].size();j++){
        Max=max(Max,num[node[i][j]]);
        Min=min(Min,num[node[i][j]]);
      }
      num[i]=Max+Min+1;
    }
  }
  cout << num[1] << endl;
}
