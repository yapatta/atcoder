#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  ll n,m,ans=0;
  cin >> n >> m;

  cout << (1900*m+100*(n-m))*(1<<m) << endl;
}
