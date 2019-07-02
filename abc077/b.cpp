#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  ull N;
  cin >> N;
  ull max=0;
  for(int i=1;i*i<=N;i++) {
    if(max<i*i) {
      max = i*i;
    }
  }
  cout << max << endl;
}
