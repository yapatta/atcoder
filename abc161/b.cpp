#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	int M, N;
	cin >> N >> M;
	vector<int> A(N);
	for(auto &a : A) cin >> a;
	int sum = 0;
	for(auto &a : A) sum += a;
	int cnt = 0;
	for(auto &a : A) {
		if(a >= ((double)sum / (4 * M) ) ) {
			cnt++;
		}
	}
	cout << ((cnt >= M) ? "Yes" : "No") << endl;
}
