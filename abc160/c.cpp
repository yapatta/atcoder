#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
#define All(x) (x).begin(),(x).end()
#define RAll(x) (x).rbegin(),(x).rend()


int main(){
	int K, N;
	cin >> K >> N;
	vector<int> A(N);
	for(auto &a : A) cin >> a;
	int ans = INT_MAX;
	for(int i=0;i<N;i++) {
		// i -> N-1+i
		if(N-1+i >= N) {
			ans = min(ans, A[(N-1+i)%N]+K-A[i]);
		} else{
			ans = min(ans, A[N-1+i] - A[i]);
		}
	}
	cout << ans << endl;
}
