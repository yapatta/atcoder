#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main() {
  vector<int> a(4);
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  sort(a.begin(),a.end());
  bool flag=false;
  if(a[0]==1&&a[1]==4&&a[2]==7&&a[3]==9) flag=true;
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
