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
  int i,n,m;
  cin >> n >> m;
  vector<vector<pair<int,int> > > A(n+1);
  for(i=0;i<m;i++) {
    int p,y;
    cin >> p >> y;
    A[p].push_back(make_pair(y,i));
  }
  vector<pair<int,int> > B(m);
  for(int p=1;p<=n;p++) {
    sort(A[p].begin(), A[p].end());
    for(int j=0;j<A[p].size();j++) {
      B[A[p][j].second] = make_pair(p, j+1);
    }
  }
  for(i=0;i<m;i++) {
    printf("%06d", B[i].first);
    printf("%06d\n",B[i].second);
  }
  return 0;
}
