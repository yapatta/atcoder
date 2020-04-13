#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string ns;
	cin >> ns;
	ns = '0' + ns;
	ll ans = 0;
	bool nxp = false;
	for(int i=ns.size()-1;i>=0;i--) {
		int tmp = ns[i] - '0';
		if(nxp) {
			tmp++;
			if(tmp == 10) {
				nxp = true;
				tmp = 0;
			} else {
				nxp = false;
			}
		}
		if(tmp < 5) {
			ans += tmp;
			ns[i] = '0';
		} else if(tmp > 5) {
			ans += (10-tmp);
			ns[i] = '0';
			nxp = true;
		} else {
			int nxtmp = ns[i-1] - '0';
			if(nxtmp+1 > 5) {
				ans += (10-tmp);
				nxp = true;
			} else {
				ans += tmp;
				nxp = false;
			}
		}
	}
	cout << ans << endl;
}
