#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;
	ll h, n, w;
	// h, nの2つを確定させたらwも定まる
	// 割るとき0を割らないように注意する
	for(h=1;h<=3500LL;h++) {
		for(n=h;n<=3500LL;n++) {
			if(4*h*n <= N*(n+h)) continue;
			w = (N*h*n) / (4*h*n - N*(n+h));
			if(4*w*h*n == N*(n*w+h*w+h*n) and h <= n and n <= w) {
				cout << h << " " << n << " " << w << endl;
				return 0;
			}
		}
	}
}
