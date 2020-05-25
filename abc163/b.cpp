#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	int N, M;
	cin >> N >> M;
	vector<ll> A(M);
	for(auto &a : A) cin >> a;
	ll sum = 0;
	for(auto &a : A) sum += a;
	cout << ((N - sum >= 0) ? N - sum : -1) << endl;
}
