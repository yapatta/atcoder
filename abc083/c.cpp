#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
ull x,y,a,ans=1;
cin >> x >> y;
a=x;
while(1) {
  a*=2;
  if(a>y) {
    break;
  }
  ans++;
}
cout << ans << endl;
}
