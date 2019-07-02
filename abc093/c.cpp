#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll count=0;
  vector<ll> n(3);
  cin >> n[0] >> n[1] >> n[2];
  sort(n.begin(), n.end());

  //最小二数の偶奇が等しい場合
  if(n[0]%2 == n[1]%2) {
    count += (n[1]-n[0])/2;
    count += (n[2]-n[1]);
  }//最小二数の偶奇が異なる
  else {
    count++, n[1]++, n[2]++;
    count += (n[1]-n[0])/2;
    count += (n[2]-n[1]);
  }
  cout << count << endl;
}
