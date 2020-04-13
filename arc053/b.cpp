#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 同じ文字2個の組の個数をtwo
// 文字1個の個数をone
// 文字1個のに2個をバランス良く割り当てればいい

int main(){
	string S;
	cin >> S;
	int N = S.size();
	vector<int> al(26,0);
	for(int i=0;i<N;i++) {
		al[S[i] - 'a']++;
	}
	int one = 0, two = 0;
	for(int i=0;i<26;i++) {
		if(al[i] % 2 == 0) {
			two += al[i] / 2;
		} else {
			one++;
			two += al[i] / 2;
		}
	}
	
	if(one == 0) {
		cout << N << endl;
	} else {
		cout << (two / one) * 2 + 1 << endl;
	}
	return 0;
}
