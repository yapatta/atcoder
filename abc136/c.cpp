#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	bool flag = true;
	for(int i=n-2;i>=0;i--) {
		if(a[i] > a[i+1]) {
			a[i]--;
			if(a[i] != a[i+1]) {
				flag = false;
			}
		}
	}
	for(int i=0;i<n-1;i++) {
		if(a[i] > a[i+1]) flag =false;
	}
	cout << ((flag)?"Yes":"No") << endl;
}
