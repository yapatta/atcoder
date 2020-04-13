#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> a;
	for(int i=0;i<n;i++) {
		int tmp;
		cin >> tmp;
		a.push_back({tmp,i+1});
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++) {
		if(i==0) cout << a[i].second;
		else cout << " " << a[i].second;
	}
	cout << endl;
}
