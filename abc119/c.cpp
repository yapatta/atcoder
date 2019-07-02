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
//以後、合成魔法を使用しないような竹に対してのみ、延長、縮小魔法を利用
int N,A,B,C;
int l[10];
int dfs(int cur,int a,int b,int c){
  if(cur==N) {
    if(a>0&&b>0&&c>0) return abs(a-A)+abs(b-B)+abs(c-C)-30;
    else return A+B+C;
  }
  int ret0=dfs(cur+1,a,b,c);
  int ret1=dfs(cur+1,a+l[cur],b,c)+10;
  int ret2=dfs(cur+1,a,b+l[cur],c)+10;
  int ret3=dfs(cur+1,a,b,c+l[cur])+10;
  int retM=min(ret0,ret1);
  retM=min(retM,ret2);
  retM=min(retM,ret3);
  return retM;
}
int main() {
  cin >> N >> A >> B >> C;
  rep(i,N){
    cin >> l[i];
  }
  cout << dfs(0,0,0,0) << endl;
}
