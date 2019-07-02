#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  int ans=0;
  if(a<b){
    ans=c/a;
    c %= a;
    ans += c/b;
  }else{
    ans=c/b;
    c %= b;
    ans += c/a;
  }
  cout << ans << endl;
}
