#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// ABC141EをZ Algorithmで解答
// https://qiita.com/Pro_ktmr/items/16904c9570aa0953bf05 を参照

int z_algorithm(const string &s, const int &n) {
	vector<int> Z(n);
	Z[0] = s.size();
	int i = 1, j = 0;
	while(i < n) {
		while(j + i < n && s[j] == s[i+j]) j++;
		Z[i] = j;

		if(j == 0) {
			i++;
			continue;
		}

		int k = 1;
		while(k < j && k + Z[k] < j) {
			Z[i+k] = Z[k];
			k++;
		}
		i += k;
		j -= k;
	}
	int ret = 0;
	for(int i=1;i<n;i++) ret = max(ret, min(Z[i], i));
	return ret;
}

int main() {
	int N;
	string S;
	cin >> N >> S;
	int ans = 0;
	for(int i=0;i<N;i++) {
		ans = max(ans, z_algorithm(S.substr(i) ,N-i));
	}
	cout << ans << endl;
}
