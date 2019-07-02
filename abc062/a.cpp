#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define __TRUE "yes"
#define __FALSE "no"

int main() {
  int x,y;
  cin >> x >> y;
  int a[]={0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
  cout << (a[x] == a[y] ? "Yes" : "No") << endl;
}
//a[i]のiごとにグループ化
