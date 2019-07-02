#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dp[101]={};
int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int count=0;
  for(int i=0;i<=100;i++) {
    if(i==a) {
      dp[i]++;
    }
    if(i==c) {
      dp[i]++;
    }
    if(i==b) {
      dp[i]--;
    }
    if(i==d) {
      dp[i]--;
    }
    dp[i+1] = dp[i];
    if(dp[i]==2)
      count++;
  }
  cout << count << endl;
}
