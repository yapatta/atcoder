#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  string s;
  string set="WBWBWWBWBWBW";
  cin >> s;
  ll num;
  for(ll i=0;i<s.size();i++) {
    string tmp;
    tmp=s.substr(i,12);
    if(tmp==set) {
      num=i;
      break;
    }
  }
  string ans;
  switch(num) {
        case 0:
        case 11:
            ans="Do";
            break;
        case 10:
        case 9:
            ans="Re";
            break;
        case 8:
            ans="Mi";
            break;
        case 7:
        case 6:
            ans="Fa";
            break;
        case 5:
        case 4:
            ans="So";
            break;
        case 3:
        case 2:
            ans="La";
            break;
        case 1:
            ans="Si";
            break;
        default:
            break;
    }
    cout << ans << endl;
}
