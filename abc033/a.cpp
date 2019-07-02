#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  string n;
  cin >> n;
  bool flag=true;
  for(int i=0;i<3;i++) {
    if(n[i]!=n[i+1]) {
      flag=false;
      break;
    }
  }
  if(flag) cout << "SAME" << endl;
  else cout << "DIFFERENT" << endl;
}
