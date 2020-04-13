#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, Q;
	cin >> N >> Q;
	vector<set<int>> st(N);
	for(int k=0;k<Q;k++) {
		int q;
		cin >> q;
		if(q == 1) {
			int a, b;
			cin >> a >> b;
			a--, b--;
			st[a].insert(b);
		} else if(q == 2) {
			int a;
			cin >> a;
			a--;
			for(int i=0;i<N;i++) {
				if(i == a) continue;
				if(st[i].count(a)) {
					st[a].insert(i);
				}
			}
		} else {
			int a;
			cin >> a;
			a--;
			set<int> tmp;
			for(auto &x : st[a]) {
				for(auto &y : st[x]) {
					if(y != a) tmp.insert(y);
				}
			}
			for(auto t : tmp) {
				st[a].insert(t);
			}
		}
	}
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			if(i==j) {
				cout << "N";
				continue;
			}
			if(st[i].count(j)) {
				cout << "Y";
			}else {
				cout << "N";
			}
		}
		cout << endl;
	}
}
