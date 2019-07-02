#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(b*c>a*d) {
    cout << "TAKAHASHI" << endl;
  }else if(b*c<a*d){
    cout << "AOKI" << endl;
  }else{
    cout << "DRAW" << endl;
  }
}
