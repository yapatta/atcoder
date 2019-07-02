#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  string w;
  string ans;
  cin >> w;
  for(int i=0;i<w.size();i++){
    if( !(w[i]=='a'||w[i]=='i'||w[i]=='u'||w[i]=='e'||w[i]=='o') ){
      ans += (w[i]);
    }
  }
  cout << ans << endl;
}
