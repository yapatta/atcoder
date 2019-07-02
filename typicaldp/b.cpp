#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

//dp[i][j] : 左の山がi個、右の山がj個残っている状態から
//スタートするときの先手の取るものの価値の和
ll dp[1005][1005];

int main() {
  int A,B;
  cin >> A >> B;
  vector<int> a(A),b(B);
  for(int i=A-1;i>=0;i--) {
    cin >> a[i];
  }
  for(int i=B-1;i>=0;i--) {
    cin >> b[i];
  }

  dp[0][0]=0,dp[0][1]=b[0],dp[1][0]=a[0];

  for(int i=2;i<=A;i++) {
    dp[i][0] = dp[i-2][0] + a[i-1];
  }
  for(int i=2;i<=B;i++) {
    dp[0][i] = dp[0][i-2] + b[i-1];
  }
  dp[1][1]=max(a[0],b[0]);
  dp[1][2]=max(a[0]+b[0], b[1]+min(a[0],b[0]));
  dp[2][1]=max(a[0]+b[0], a[1]+min(a[0],b[0]));

  for(int i=2;i<=A;i++) {
    for(int j=2;j<=B;j++) {
      if(a[i-1]>b[j-1]){
        if(a[i-2]>b[j-1]){
          dp[i][j] = a[i-1]+dp[i-2][j];
        }else if(a[i-2]<b[j-1]){
          dp[i][j] = a[i-1]+dp[i-1][j-1];
        }else {
          dp[i][j] = a[i-1]+max(dp[i-2][j],dp[i-1][j-1]);
        }
      }else if(a[i-1]<b[j-1]) {
        if(a[i-1]>b[j-2]){
          dp[i][j] = b[i-1]+dp[i-1][j-1];
        }else if(a[i-1]<b[j-2]){
          dp[i][j] = b[i-1]+dp[i][j-2];
        }else{
          dp[i][j] = b[i-1]+max(dp[i-1][j-1],dp[i][j-2]);
        }
      }else {
        //aについて
        int max_a=0;
        if(a[i-2]>b[j-1]){
          max_a = a[i-1]+dp[i-2][j];
        }else if(a[i-2]<b[j-1]){
          max_a = a[i-1]+dp[i-1][j-1];
        }else {
          max_a = a[i-1]+max(dp[i-2][j],dp[i-1][j-1]);
        }
        //bについて
        int max_b=0;
        if(a[i-1]>b[j-2]){
          max_b = b[i-1]+dp[i-1][j-1];
        }else if(a[i-1]<b[j-2]){
          max_b = b[i-1]+dp[i][j-2];
        }else{
          max_b= b[i-1]+max(dp[i-1][j-1],dp[i][j-2]);
        }
        dp[i][j]=max(max_a,max_b);
      }
    }
  }
  cout << dp[A][B] << endl;
}
