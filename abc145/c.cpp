#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	vector<pair<int,int> > xy;
	cin >> n;
	for(int i=0;i<n;i++) {
		int x, y;
		cin >> x >> y;
		xy.push_back({x,y});
	}
	sort(xy.begin(),xy.end());
	double sum  = 0;
	ll key = 1;
	for(int i=1;i<=n;i++) key *= i;
	do {
		double tmp = 0;
		int nx = xy[0].first;
		int ny = xy[0].second;
		for(int i=1;i<n;i++) {
			tmp += sqrt((nx - xy[i].first)*(nx - xy[i].first) + (ny - xy[i].second)*(ny - xy[i].second));
			nx = xy[i].first, ny = xy[i].second;
		}
		sum += tmp/(double)key;
	} while(next_permutation(xy.begin(), xy.end()));
	
	cout << fixed << setprecision(8) <<  sum << endl;
}
