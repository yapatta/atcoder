#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	int N; cin >> N;
	vector<int> ans(N+1, 0);
	for(int i=0;i<N-1;i++) {
		int a;
		cin >> a;
		ans[a]++;
	}
	for(int i=1;i<=N;i++) {
		cout << ans[i] << endl;
	}
}
