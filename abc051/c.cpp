#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
		int sx,sy,tx,ty;
		cin >> sx >> sy >> tx >> ty;
		
		string ans = "";
		ans += string(tx-sx, 'R');
		ans += string(ty-sy, 'U');
		ans += string(tx-sx, 'L');
		ans += string(ty-sy, 'D');

		ans += string(1, 'L');
		ans += string(ty-sy+1, 'U');
		ans += string(tx-sx+1, 'R');
		ans += string(1, 'D');

		ans += string(1, 'R');
		ans += string(ty-sy+1, 'D');
		ans += string(tx-sx+1, 'L');
		ans += string(1, 'U');

		cout << ans << endl;
}
