#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	int N;
	cin >> N;
	vector<string> S(N);
	for(int i=0;i<N;i++)
		cin >> S[i];

	int ans = 0;
	for(int i=0;i<N;i++) {
		for(int j=N-1;j>=0;j--) {
			if(S[i][j] == '.') {
				ans++;

				// i段目
				for(int k=0;k<=j;k++) {
					S[i][k] = 'o';
				}
				// i+1段目
				if(i + 1 != N) {
					for(int k=j;k<N;k++) {
						S[i+1][k] = 'o';
					}
				}
			}
		}
	}

	cout << ans << endl;
}
