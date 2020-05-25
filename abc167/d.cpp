#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	ll N, K;
	cin >> N >> K;
	vector<int> A(N);
	for(auto &a : A) {
		cin >> a;
		a--;
	}

	// 町1に戻るまでの回数cnt(<=N)
	ll cnt = 0;
	int now = 0;
	while(cnt < N) {
		now = A[now];
		cnt++;
		if(now == 0) {
			break;
		}
	}

	if (now == 0) {
		ll rest = K % cnt;
		if (rest < 0) rest += cnt;
		for(int i=0;i<rest;i++) {
			now = A[now];
		}
		cout << now + 1 << endl;
	} else {
		cnt = 0;
		int orig = now;
		while(cnt <= N) {
			now = A[now];
			cnt++;
			if(now == orig) {
				break;
			}
		}
		ll rest = (K - N) % cnt;
		if(rest < 0) rest += cnt;

		for(int i=0;i<rest;i++) {
			now = A[now];
		}
		cout << now + 1 << endl;
	}
}
