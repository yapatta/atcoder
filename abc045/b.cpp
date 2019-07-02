#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  string s[3];
  cin >> s[0] >> s[1] >> s[2];
  int num[3]={0,0,0};
  int i=0;
  while(1) {
    if(num[i]==s[i].size()) {
      cout << char('A'+i) << endl;
      return 0;
    }
    i=s[i][num[i]++]-'a';
  }
}
