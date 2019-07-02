#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int a,b;
  string s;
  cin >> a >> b >> s;
  bool flag=true;
  for(int i=0;i<a;i++) {
    if(s[i]<'0' || s[i]>'9') {
      flag=false;
      break;
    }
  }
  if(s[a]!='-') flag=false;
  for(int i=a+1;i<s.size();i++) {
    if(s[i]<'0' || s[i]>'9') {
      flag=false;
      break;
    }
  }
  if(flag) cout(__TRUE);
  else cout(__FALSE);
}
