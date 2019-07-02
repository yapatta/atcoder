#include <iostream>
using namespace std;
#define MAX 55
int X[MAX][MAX];

int main(void) {
  int n, m;
  cin >> n >> m;

  //初期化
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      X[i][j] = 0;
    }
  }

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    X[a][b]++;
    X[b][a]++;
  }
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= m; j++) {
      if(X[])
    }
  }


  return 0;
}
