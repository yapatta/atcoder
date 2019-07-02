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
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100000
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector< pair<int,int> > A[n];
  for(int i=0;i<m;i++) {
    int p, y;
    cin >> p >> y;
    A[p].push_back(make_pair(y,i));
  }
  pair<int, int> ans[MAX];
  for(int i=1;i<=n;i++) {
    sort(A[i].begin(), A[i].end());
    for(int j=0;j<A[i].size();j++) {
      ans[A[i][j].second]= make_pair(i,j+1);
    }
  }
  for(int i=0;i<m;i++) {
    printf("%06d%06d\n", ans[i].first, ans[i].second);
  }
  return 0;
}
