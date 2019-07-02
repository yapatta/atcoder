#include <bits/stdc++.h>
#include <cstdio>
#define MAX 3005
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main() {
  string S,T;
  cin >> S >> T;
  vector<vector<string> > dp(S.size()+1, vector<string>(T.size()+1));

  for(int i=0;i<=S.size();i++) dp[i][0]="";
  for(int j=0;j<=T.size();j++) dp[0][j]="";

  for(int i=1;i<=S.size();i++) {
    for(int j=1;j<=T.size();j++) {
      string a="",b,c,max_abc;
      b = dp[i-1][j];
      c = dp[i][j-1];
      (b.size()>=c.size()) ? max_abc=b : max_abc=c;
      if(S[i-1]==T[j-1]) a = dp[i-1][j-1] + S[i-1];
      (a.size()>=max_abc.size()) ? max_abc=a : max_abc=max_abc;
      dp[i][j]=max_abc;
    }
  }
  cout << dp[S.size()][T.size()] << endl;
}
