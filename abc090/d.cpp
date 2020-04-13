#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
/*
 * k <= a % b
 * ありうる(a,b)の組を求めよ
 *
 * どこで計算量を落とすか
 * b > a のとき, あまりは絶対a(a < b <= n)
 * b <= a のとき, 余りは0~a-1で周期を持つ
 */
int n, k;

int main() {
	cin >> n >> k;
	if(k==0) {
		cout << n*n << endl;
		return 0;
	}
	ll cnt = 0;
	// a < k のとき: そもそも無理(理由: あまり0~a < k)
	for(int a=k;a<=n;a++) {
		for(int b=1;b<=a;b++) {
			if(a%b >= k)
				cnt++;
		}
		if(a >= k)
			cnt += (n-a);
	}
	cout << cnt << endl;
}
