#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int a,d;
  cin >> a >> d;
  int x=(a+1)*d;
  int y=a*(d+1);
  cout << ((x>y)?x:y) << endl;
}
