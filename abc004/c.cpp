#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll N;
	cin >> N;
	int ans[6];
	for(int i=0;i<=5;i++) ans[i] = i+1;

	N %= 30;
	for(int i=0;i<N;i++) {
		swap(ans[i%5], ans[i%5+1]);
	}
	for(int i=0;i<6;i++) cout << ans[i];
	cout << endl;
}
