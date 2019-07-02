#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector< vector<int> > a(n, vector<int>(n, 0));
  for(int i=0;i<n;i++) {
    int u,k;
    cin >> u >> k;
    u--;
    for(int j=0;j<k;j++) {
      int v;
      cin >> v;
      v--;
      a[u][v]++;
    }
  }
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(j) cout << " ";
      cout << a[i][j];
    }
    cout << endl;
  }
}
