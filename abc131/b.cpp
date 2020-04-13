#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N_MAX = 205;
int N,L;

void input() {
	cin >> N >> L;
}

void solve() {
	int sum = 0;
	int key = 1000;
	for(int i=0;i<N;i++) {
		sum += ( L + i);
		if(abs(key) > abs(L+i)) {
			key = L+i;
		}
	}
	cout << sum-key << endl;
}

int main() {
	input();
	solve();
}
