#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<ull> L(N+1);
  L[0]=2,L[1]=1;
  for(int i=2;i<=N;i++) {
    L[i] = L[i-1]+L[i-2];
  }
  cout << L[N] << endl;
}
