#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	ll N, A, B;
	cin >> N >> A >> B;
	if((B - A) % 2 == 0) {
		cout << (B - A) / 2 << endl;
	} else {
		cout << min(A + (B - A - 1) / 2, N - B + 1 + (B - A - 1) / 2) << endl;
	}
}
