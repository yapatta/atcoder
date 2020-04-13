#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 305;

// だめな条件から考える

int main() {
	int n;
	cin >> n;
	vector<vector<int> > xtoy(n);
	for(int i=0;i<n;i++) {
		string a;
		cin >> a;
		for(int j=0;j<n;j++) {
			if(a[j]=='1') {
				xtoy[i].push_back(j);
			}
		}
	}
	vector<vector<bool> > yz(n,vector<bool>(n,1)), restore(n,vector<bool>(n));
	vector<string> b(n);
	for(int i=0;i<n;i++) {
		cin >> b[i];
		for(int z=0;z<n;z++) {
			if(b[i][z]=='0') {
				for(int k=0;k<xtoy[i].size();k++) {
					int y = xtoy[i][k];
					yz[y][z] = 0;
				}
			}
		}
	}
	bool flag = true;
	for(int x=0;x<n;x++) {
		for(int to=0;to<xtoy[x].size();to++) {
			int y = xtoy[x][to];
			for(int z=0;z<n;z++) {
				if(yz[y][z]) {
					if(b[y][z]=='0')
						flag = false;
				}else {
					if(b[y][z] == '1')
						flag = false;
				}
			}
		}
	}
	if(!flag) {
		cout << -1 << endl;
		return 0;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout << yz[i][j];
		}
		cout << endl;
	}
}
