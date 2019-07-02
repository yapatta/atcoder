#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  int s,e,ans=0;
  rep(i,3){
    cin >> s >> e;
    ans +=(s*e/10);
  }
  cout << ans << endl;
}
