#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, M;
	cin >> N >> M;
	set<int> AC;
	AC.insert(INT_MAX);
	int wa = 0;
	for(int i=0;i<M;i++) {
		int p;
		string s;
		cin >> p >> s;
		if(*AC.lower_bound(p) != p) {
			if(s == "AC") {
				AC.insert(p);
			}
			if(s == "WA") {
				wa++;
			}
		}
	}
	cout << AC.size() - 1 << " " << wa << endl;
}
