#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	for(int i=n;i>=1;i--) {
		if(to_string(i).size() % 2 == 1) cnt++;
	}
	cout << cnt << endl;
}
