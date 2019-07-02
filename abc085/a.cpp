#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  string s;
  cin >> s;
  int point;
  for(int i=0;i<s.size();i++) {
    if(s[i]=='7'){
      point = i;
      break;
    }
  }
  s[point]='8';
  cout << s << endl;
}
