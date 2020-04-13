#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string S;
	int Q;
	cin >> S >> Q;
	deque<char> dq;
	for(int i=0;i<S.size();i++) dq.push_back((char)S[i]);
	int rcnt = 0;
	for(int i=0;i<Q;i++) {
		int q;
		cin >> q;
		if(q == 1) {
			rcnt++;
		} else if(q == 2) {
			int f;
			char c;
			cin >> f >> c;
			if(f == 1) {
				if(rcnt % 2 == 0) {
					dq.push_front(c);
				} else {
					dq.push_back(c);
				}
			} else {
				if(rcnt % 2 == 0) {
					dq.push_back(c);
				} else {
					dq.push_front(c);
				}
			}
		}
	}
	while(!dq.empty()) {
		if(rcnt % 2 == 0) {
		cout << dq.front();
		dq.pop_front();
		} else {
			cout << dq.back();
			dq.pop_back();
		}
	}
	cout << endl;
}
