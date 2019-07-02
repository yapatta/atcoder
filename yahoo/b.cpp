#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
  vector< pair<int,int> > nu(3);
  vector<int> dp(4,0);
  rep(i,3){
    int a,b;
    cin >> a >> b;
    //小さい方がa
    if(a<=b){
      nu[i].first=a;
      nu[i].second=b;
    }else{
      nu[i].first=b;
      nu[i].second=a;
    }
    dp[nu[i].first-1]++;
    dp[nu[i].second-1]++;
    if(nu[i].first == nu[i].second){
      cout << "NO" << endl;
      return 0;
    }
  }
  sort(All(nu));
  rep(i,2){
    if(nu[i].first==nu[i+1].first&&nu[i].second==nu[i+1].second){
      cout << "NO" << endl;
      return 0;
    }
  }
  sort(All(dp));
  if(dp[0]==dp[1]&&dp[0]==1&&dp[2]==dp[3]&&dp[2]==2){
    cout << "YES" << endl;
  }else {
    cout << "NO" << endl;
  }
}
