#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int a,b;
	cin >> a >> b;
	int cnt = 0;
	int sum = 1;
	while(sum < b) {
		sum--;
		sum += a;
		cnt++;
	}
	cout << cnt << endl;
}
