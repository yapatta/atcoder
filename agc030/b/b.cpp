#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 200005
using namespace std;
ll j=0, S[MAX];
ll X[MAX];
ll L, N;
//beforeは左が1右が2
void bun(int s, int n, ll ff, int before);
int main() {
   ll i;
   cin >> L >> N;
   for(i=1;i<=N;i++) {
     cin >> X[i];
   }
   X[0]=0;
   bun(0, N, 0, 1);
   ll max=0;
   for(i=0;i<j;i++) {
     cout << S[i] << endl;
     if(max<S[i]) max=S[i];
   }
   cout << max << endl;
   return 0;
}

void bun(int s, int n, ll ff, int before) {
  if(s==n) {
    S[j++]=ff;
    return;
  }
  //直前が左に進んだのとき
  if(before == 1) {
    return bun(s+1, n, ff + (X[s+1]-X[s]), 1);
    return bun(s, n-1, ff + (L-X[n]+X[s]), 2);
  }
  //直前が右に進んだとき
  else{
    return bun(s+1, n, ff + (L-X[n]+X[s]), 1);
    return bun(s, n-1, ff + (X[n+1]-X[n]), 2);
  }
}
