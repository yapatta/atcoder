#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

int main(){
  string s;
  cin >> s;
  if('a'<=s[0]&&s[0]<='z'){
    s[0]=char(s[0]-32);
  }
  for(int i=1;i<s.size();i++){
    if('A'<=s[i]&&s[i]<='Z'){
      s[i]=char(s[i]+32);
    }
  }
  cout << s << endl;
}
