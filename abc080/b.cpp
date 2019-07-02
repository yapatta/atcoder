#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  string n;
  cin >> n;
  ull max=0;
  for(int i=0;i<n.size();i++) {
    max += (n[i]-'0');
  }
  if(stoull(n)%max==0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
