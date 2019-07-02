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
int LP[5005][5005]={};

int main() {
  string x,y;
  cin >> x >> y;
  LP[0][0] = 0;
  for(int i=1;i<=x.size();i++) LP[i][0] = 0;
  for(int j=1;j<=y.size();j++) LP[0][j] = 0;

  //aをbに近づけたい!
  for(int i=1;i<=x.size();i++) {
    for(int j=1;j<=y.size();j++) {
      if(x[i-1]==y[j-1]){
        LP[i][j] = max(LP[i-1][j-1]+1,max(LP[i][j-1],LP[i-1][j]));
      }else{
        LP[i][j] = max(LP[i][j-1],LP[i-1][j]);
      }
    }
  }
  cout << LP[x.size()][y.size()]+1 << endl;
}
