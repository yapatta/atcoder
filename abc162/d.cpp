#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	int N;
	string S;
	cin >> N >> S;
	// 真ん中がR,G,Bか
	string rgb = "RGB";
	vector<ll> R(N+1,0), G(N+1,0), B(N+1,0);
	for(int i=1;i<=N;i++) {
		R[i] = R[i-1] + ((S[i-1]=='R') ? 1 : 0);
		G[i] = G[i-1] + ((S[i-1]=='G') ? 1 : 0);
		B[i] = B[i-1] + ((S[i-1]=='B') ? 1 : 0);
	}
	ll ans = 0;
	for(int i=1;i<=N;i++) {
		if(S[i-1] == 'R') {
			for(int j=i+1;j<=N;j++) {
				if(S[j-1]=='G') {
					// RGB
					ll n = B[N] - B[j];
					ans += n;
					if(1 <= 2*j-i and 2*j-i <= N) {
						ans -= (B[2*j-i] - B[2*j-i-1]);
					}
				} else if(S[j-1]=='B') {
					// RBG
					ll n = G[N] - G[j];
					ans += n;
					if(1 <= 2*j-i and 2*j-i <= N) {
						ans -= (G[2*j-i] - G[2*j-i-1]);
					}
				}
			}
		} else if(S[i-1] == 'G') {
			for(int j=i+1;j<=N;j++) {
				if(S[j-1]=='R') {
					// GRB
					ll n = B[N] - B[j];
					ans += n;
					if(1 <= 2*j-i and 2*j-i <= N) {
						ans -= (B[2*j-i] - B[2*j-i-1]);
					}
				} else if(S[j-1]=='B') {
					// GBR
					ll n = R[N] - R[j];
					ans += n;
					if(1 <= 2*j-i and 2*j-i <= N) {
						ans -= (R[2*j-i] - R[2*j-i-1]);
					}
				}
			}
		} else if(S[i-1] == 'B') {
			for(int j=i+1;j<=N;j++) {
				if(S[j-1]=='R') {
					// BRG
					ll n = G[N] - G[j];
					ans += n;
					if(1 <= 2*j-i and 2*j-i <= N) {
						ans -= (G[2*j-i] - G[2*j-i-1]);
					}
				} else if(S[j-1]=='G') {
					// GBR
					ll n = R[N] - R[j];
					ans += n;
					if(1 <= 2*j-i and 2*j-i <= N) {
						ans -= (R[2*j-i] - R[2*j-i-1]);
					}
				}
			}
		}
	}
	cout << ans << endl;
}
