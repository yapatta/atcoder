#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

signed main(){
  int N;
  string s;
  cin >> N >> s;
  double ans = 0;

  int cnt=0;
  int f,l;
  vector<pi> ice;
  for(int i=0;i<N;i++){
    f = 0,l = 0;
    if(s[i]=='>'){
      f = i;
      while(1){
        if(s[i]=='>'){
          i++;
        }else{
          l = i;
          //[f,l)
          i--;
          ice.push_back(make_pair(f,l));
          break;
        }
      }
    }
  }
  ice.push_back(make_pair(0,0));
  int length = 0,point = -1;
  rep(i,ice.size()){
    int l = 0,p = 0;
    l = ice[i].second-ice[i].first+1;
    if(ice[i].second==N && ice[i].first==0) continue;
    else if(ice[i].second!=N) p = ice[i].second;
    else if(ice[i].first!=0) p = ice[i].first-1;

    if(length<l) {
      length = l;
      point = p;
    }
    //cout << ice[i].first << " " << ice[i].second << endl;
  }
  s[point] = '>';

  for(int i=0;i<N;i++){
    if(s[i]=='>'){
      double k = 2;
      while(1){
        if(s[i]=='>'){
          ans += 1/k;
          i++;
          k++;
        }else{
          i--;
          break;
        }
      }
    }else{
      ans += 1;
    }
  }
  printf("%.9f\n",ans);
}
