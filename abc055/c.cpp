#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
using namespace std;

int main() {
  ll N,M;
  cin >> N >> M;
  ll t;
  if((M-2*N)>=0) {
    t=(M-2*N)/4;
    cout << N+t << endl;
  }else {
    cout << M/2 << endl;
  }
}
