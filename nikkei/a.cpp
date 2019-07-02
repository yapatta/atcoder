#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll n,a,b;
  cin >> n >> a >> b;
  if(a+b-n>=0) cout << min(a,b) << " " << a+b-n << endl;
  else cout << min(a,b) << " " << 0 << endl;
}
