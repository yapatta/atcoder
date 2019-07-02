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

int main() {
  int N;
  string s;
  cin >> s;
  int zero=0,one=0;
  rep(i,s.size()){
    if(s[i]=='0') zero++;
    else one++;
  }
  if(one>=zero) cout << 2*zero << endl;
  else cout << 2*one << endl; 
}
