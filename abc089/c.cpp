#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll N;
  cin >> N;
  vector<ll> march(5,0);
  for(int i=0;i<N;i++) {
    string s;
    cin >> s;
    if(s[0]=='M') march[0]++;
    if(s[0]=='A') march[1]++;
    if(s[0]=='R') march[2]++;
    if(s[0]=='C') march[3]++;
    if(s[0]=='H') march[4]++;
  }

  ll ans=0;
  for(int i=0;i<5;i++) {
    for(int j=i+1;j<5;j++) {
      for(int k=j+1;k<5;k++) {
        ans += (march[i]*march[j]*march[k]);
      }
    }
  }
  cout << ans << endl;
}
