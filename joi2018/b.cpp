#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 200005
using namespace std;
const ll MOD=1e9+7;

int main(){
  int N,M;
  cin >> N;
  vector<int> x(N+1,0),y(N);
  rep(i,N){
    int tmp;
    cin >> tmp;
    x[tmp]=1;
    y[i]=tmp;
  }
  cin >> M;
  rep(i,M){
    int tmp;
    cin >> tmp;
    if(!x[y[tmp-1]]){
      x[y[tmp-1]]=0;
      y[tmp-1]++;
      x[y[tmp-1]+1]=1;
    }
  }
  rep(i,N){
    cout << y[i] << endl;
  }
}
