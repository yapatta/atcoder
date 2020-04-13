#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	bool flag = true;
	for(auto e : a) {
		if(e%2 == 0) {
			if(e%3==0 || e%5==0) {

			} else {
				flag = false;
			}
		}
	}
	cout << ((flag) ? "APPROVED" : "DENIED") << endl;
}
