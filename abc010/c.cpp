#include <bits/stdc++.h>
using namespace std;

int main() {
	int sx, sy, gx, gy, t, v, n;
	cin >> sx >> sy >> gx >> gy >> t >> v >> n;
	for(int i=0;i<n;i++) {
		int x, y;
		cin >> x >> y;
		double length = sqrt((x-sx)*(x-sx) + (y-sy)*(y-sy)) +  sqrt((x-gx)*(x-gx) + (y-gy)*(y-gy));
		if(length <= t*v) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
