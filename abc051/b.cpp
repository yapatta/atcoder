#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int K,S;
  cin >> K >> S;
  int x,y,z;
  int ans=0;
  for(x=0;x<=K;x++) {
    for(y=0;y<=K&&y<=S-x;y++) {
      z=S-x-y;
      if(z<=K) {
        ans++;
      }
    }
  }
  cout << ans <<endl;
}
