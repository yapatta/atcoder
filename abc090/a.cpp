#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  char c[3][3];
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      cin >> c[i][j];
    }
  }
  cout << c[0][0] << c[1][1] << c[2][2] << endl;
}
