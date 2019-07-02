#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int N,A;
ll ans = 0;
vector<int> x;

int main() {
  cin >> N >> A;
  x.resize(N);
  for(int i=0;i<N;i++)
		  cin >> x[i];

  //探索した要素数(0~N-1),取った要素数,合計
  vector<vector<vector<ll> > > dp(N+3, vector<vector<ll>>(N+3, vector<ll>(2600, 0)));

  ll ans = 0;
  for(int i=0;i<=N;i++)
		  dp[i][0][0] = 1;
  
  for(int j=1;j<=N;j++){
		  for(int k=1;k<=N;k++){
				  for(int s=0;s<=2500;s++){
						if(s>=x[j-1]){
								dp[j][k][s] += dp[j-1][k-1][s-x[j-1]];
						}
						dp[j][k][s] += dp[j-1][k][s];
				  }
		  }
  }

  for(int k=1;k<=N;k++){
		  for(int s=1;s<=2500;s++){
				  if(k*A==s){
				  		ans += dp[N][k][s];
				  }
		  }
  }
  cout << ans << endl;
}
