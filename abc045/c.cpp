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
  ll ans=stoll(s);
  for(ll i=1;i<(1<<(s.size()-1));i++) {
    vector<string> a;
    ll j=0,num=0,count=1,tmp=0;
    while(num+count<=s.size()+1) {
      if( i&(1<<j)) {
        a.push_back(s.substr(num,count));
        num=num+count;
        count=1;
      }else {
        count++;
      }
      j++;
    }
    a.push_back(s.substr(num,count));

    for(int j=0;j<a.size();j++) {
      tmp += stoll(a[j]);
    }
    ans += tmp;
  }
  cout << ans << endl;
}
