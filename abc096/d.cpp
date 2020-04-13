#include <iostream>
#include <vector>
using namespace std;

bool is_sosu(int n) {
	bool flag = true;
	for(int i=2;i*i<=n;i++) {
		if(n % i == 0)
			flag = false;
	}
	return flag;
}

int main(void) {
	int N;
	cin >> N;

	vector<int> sosu;
	
	int cnt = 0, num = 11;
	while(cnt <= 60) {
		if(is_sosu(num)) {
			sosu.push_back(num);
			cnt++;
		}
		num += 10;
	}
	for(int i=0;i<N;i++) {
		if(i==0) cout << sosu[i];
		else cout << " " << sosu[i];
	}
	putchar('\n');
}
