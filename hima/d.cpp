#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> edge_num(n,0);
	for(int i=0;i<m;i++) {
		int a,b;
		cin >> a >> b;
		a--,b--;
		edge_num[a]++;
		edge_num[b]++;
	}
	for(int i=0;i<n;i++) {
		if(edge_num[i]%2 == 1) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
