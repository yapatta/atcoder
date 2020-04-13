#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	ll N, K;
	cin >> N >> K;
	ll l = N % K, r = -(N % K - K);
	cout << ((l < r) ? l : r) << endl;
}
