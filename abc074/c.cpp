#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main(){
  int a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;
  //ans: 水, ansS: 砂糖
  vector<int> ans,ansS;

  for(int i=0;a*i<=f;i++){
    for(int j=0;100*a*i+100*b*j<=f;j++){
      if(i==0&&j==0) continue;
      ans.push_back(100*a*i+100*b*j);
    }
  }
  //yについて
  for(int i=0;c*i<=f;i++){
    for(int j=0;c*i+d*j<=f;j++){
      //if(i==0&&j==0) continue;
      //分母が0になる分には問題なし
      ansS.push_back(c*i+d*j);
    }
  }

  int sum=0,sumS=0;
  rep(i,ans.size()){
    rep(j,ansS.size()){
      if(ans[i]+ansS[j]>f) continue;
      if(ansS[j]*sum>=(ans[i]+ansS[j])*sumS){
        if(ansS[j]*(100+e)<=(ans[i]+ansS[j])*e){
          sum=ans[i]+ansS[j];
          sumS=ansS[j];
        }
      }
    }
  }
  cout << sum << " " << sumS << endl;
}
