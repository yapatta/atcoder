#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 105
#define __TRUE "YES"
#define __FALSE "NO"
#define cout(x) cout << (x) << endl
#define reps(i,s,n) for(i=s;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
char S[MAX][MAX];
int main() {
  int H,W;
  cin >> H >> W;
  for(int h=0;h<H;h++) {
    for(int w=0;w<W;w++) {
      cin >> S[h][w];
    }
  }
  for(int h=0;h<H;h++) {
    for(int w=0;w<W;w++) {
      cout << S[h][w];
    }
    cout << endl;
    for(int w=0;w<W;w++) {
      cout << S[h][w];
    }
    cout << endl;
  }
  return 0;
}
