#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N,D;
	cin >> N >> D;
	vector<vector<int> > x(N,vector<int>(D));
	for(int i=0;i<N;i++) {
		for(int j=0;j<D;j++) {
			cin >> x[i][j];
		}
	}
	int ans = 0;

	for(int i=0;i<N;i++) {
		for(int j=i+1;j<N;j++) {
			int sum = 0;
			for(int k=0;k<D;k++) {
				sum += (x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
			}
			for(int k=1;k*k<=sum;k++) {
				if(k*k==sum) {
					ans++;
					break;
				}
			}
		}
	}
	cout << ans << endl;

}
