#include <iostream>
using namespace std;
using ll = long long;

signed
main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	int ans = 500;
	for(int i=0;i<3;i++){
			for(int j=i+1;j<3;j++){
					ans = min(ans, a[i]+a[j]);
			}
	}
	cout << ans << endl;
}
