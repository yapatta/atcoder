#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int w, n, k;
int a[55], b[55];
//dp[i][j][l] := i番目のスクショまで見て、j枚貼り、幅lを使っているときの重要度の最大値
int dp[55][55][10010];

int main(void){
    cin >> w >> n >> k;
    rep(i, n) cin >> a[i] >> b[i];

    rep(i, 55)rep(j, 55)rep(l, 10010) dp[i][j][l]  = -1;
    dp[0][0][0] = 0;

    for (int i = 0; i < n; ++i){//何枚目のスクショか
        for (int j = 0; j <= k; ++j){//使用した枚数
            for (int l = 0; l <= w; ++l){//使った幅
                if(dp[i][j][l] == -1) continue;
                if(j == k){//枚数的にもう貼れない
                    dp[i + 1][j][l] = max(dp[i + 1][j][l], dp[i][j][l]);
                }else{
                    if(l + a[i] <= w){//幅が足りる
                        dp[i + 1][j + 1][l + a[i]] = max(dp[i + 1][j + 1][l + a[i]], dp[i][j][l] + b[i]);//貼る
                        dp[i + 1][j][l] = max(dp[i + 1][j][l], dp[i][j][l]);//貼らない
                    }else{//幅が足りない
                        dp[i + 1][j][l] = max(dp[i + 1][j][l], dp[i][j][l]);//貼れない
                    }
                }
            }
        }
    }

    int ans = 0;
    rep(j, 55)rep(l, 10010){
        ans = max(ans, dp[n][j][l]);
    }
    printf("%d\n", ans);
}
