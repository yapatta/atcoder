#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int m,d;
	cin >> m >> d;
	int cnt = 0;
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=d;j++) {
			int a = j/10;
			int b = j%10;
			if(a<2 || b <2) continue;
			if(i == a*b) {
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
