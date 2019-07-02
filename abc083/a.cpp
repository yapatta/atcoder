#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(a+b > c+d) cout("Left");
  else if(a+b < c+d) cout("Right");
  else cout("Balanced");
}
