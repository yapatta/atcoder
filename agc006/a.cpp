#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  int N;
  string s,t;
  cin >> N >> s >> t;
  int ans = 0;
  for(int i=1;i<=N;i++){
    string a = s.substr(N-i,i);
    string b = t.substr(0,i);
    if(a==b){
      ans = i;
    }
  }
  cout << 2*N-ans << endl;
}
