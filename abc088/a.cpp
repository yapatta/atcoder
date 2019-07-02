#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int n,a;
  cin >> n >> a;
  if(n%500 <= a) cout(__TRUE);
  else cout(__FALSE);
}
