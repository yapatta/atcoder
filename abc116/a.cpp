#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int a,b,c,ans;
  cin >> a >> b >> c;
  if(a*a+b*b==c*c) {
    ans=a*b/2;
  }else if(a*a+c*c==b*b) {
    ans=a*c/2;
  }else {
    ans=b*c/2;
  }
  cout << ans << endl;
}
