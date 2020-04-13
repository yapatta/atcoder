#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	string S;
	cin >> S;
	int cnt = 1;
	string now = ""s + S[0];
	int i = 1;
	while(i < S.size()) {
		string tmp = ""s + S[i];
		if(now == tmp) {
			if(i+1 < S.size()) {
				tmp += S[i+1];
				now = tmp;
				i += 2;
				cnt++;
			} else {
				break;
			}
		} else {
			cnt++;
			now = tmp;
			i++;
		}
	}
	cout << cnt << endl;
}
