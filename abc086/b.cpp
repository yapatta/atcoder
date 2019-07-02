#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  string a,b;
  cin >> a >> b;
  string ans = a+b;
  int ansi = stoi(ans);
  bool flag=false;
  for(int i=1;i*i<=ansi;i++) {
    if(i*i == ansi) {
      flag=true;
      break;
    }
  }
  if(flag) cout(__TRUE);
  else cout(__FALSE);
}
