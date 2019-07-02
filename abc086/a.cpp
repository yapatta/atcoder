#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Even"
#define __FALSE "Odd"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  if( (a*b)%2==0) cout(__TRUE);
  else cout(__FALSE);
}
