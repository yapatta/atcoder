#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<ll> D(N);
  for(int i=0;i<N;i++) {
    ull a;
    cin >> a;
    int num=0;
    for(int ind=0;(1<<ind) <= a;ind++) {
      if( a&(1<<ind) ) {
        num = ind;
        break;
      }
    }
    D[i]=num;
  }
  sort(D.begin(),D.end());
  cout << D[0] << endl;
}
