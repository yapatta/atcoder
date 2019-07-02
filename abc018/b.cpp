#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(a) (a).begin(),(a).end()
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  rep(i,n){
    int l,r;
    cin >> l >> r;
    for(int i=0;i<=(r-l)/2;i++){
      char tmp=s[l-1+i];
      s[l-1+i]=s[r-1-i];
      s[r-1-i]=tmp;
    }
  }
  cout << s << endl;
}
