#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;
	vector<ll> A(N);
	set<ll> s;
	for(auto &a : A) cin >> a;
	for(auto &a : A) {
		while(a % 2 == 0) {
			a /= 2;
		}
		s.insert(a);
	}
	cout << s.size() << endl;
}
