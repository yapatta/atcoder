#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  vector<int> max(N+1);
  max[0]=0;
  for(int i=0;i<N;i++) {
    max[i+1]=max[i];
    if(S[i]=='I') max[i+1]++;
    if(S[i]=='D') max[i+1]--;
  }
  sort(max.begin(), max.end());
  cout << max[N] << endl;
}
