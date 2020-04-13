#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	int N, K, C;
	string S;
	cin >> N >> K >> C >> S;
	vector<bool> work(N+1, true);
	vector<int> work_front(K), work_back(K);
	for(int i=0;i<N;i++) {
		if(S[i] == 'x') {
			work[i] = false;
		}
	}
	int now = 0;
	for(int k=0;k<K;k++) {
		while(now < N and work[now] == false) now++;
		if(now == N) break;
		work_front[k] = now;
		now += (C + 1);
	}
	now = N - 1;
	for(int k=K-1;k>=0;k--) {
		while(now >= 0 and work[now] == false) now--;
		if(now == -1) break;
		work_back[k] = now;
		now -= (C + 1);
	}
	for(int k=0;k<K;k++) {
		if(work_front[k] == work_back[k]) {
			cout << work_front[k] + 1 << endl;
		}
	}
}
