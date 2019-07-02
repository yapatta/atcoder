#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

int main(){
  int N;
  cin >> N;
  string s;
  cin >> s;
  int r=0,b=0;
  rep(i,N){
    if(s[i]=='R') r++;
    else b++;
  }
  if(r>b) cout << "Yes" << endl;
  else cout << "No" << endl;
}
