#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  string s;
  cin >> s;
  int count=0;
  for(int i=0;i<s.size();i++) {
    if(s[i]=='1') count++;
  }
  cout << count << endl;
}
