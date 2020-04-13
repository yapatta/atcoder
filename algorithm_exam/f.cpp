#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string S;
	cin >> S;
	int st = 0;
	vector<string> ans;
	bool flag = false;
	for(int i=0;i<S.size();i++) {
		if('A' <= S[i] and S[i] <= 'Z') {
			if(flag) {
				ans.push_back(S.substr(st, i-st+1));
				flag = false;
			} else {
				st = i;
				flag = true;
			}
		}
	}
	// ans.push_back(S.substr(st, S.size()-st));
	vector<pair<string, int>>  tst;
	for(int i=0;i<ans.size();i++) {
		string tmp = ans[i];
		for(int j=0;j<tmp.size();j++) {
			if('A' <= tmp[j] and tmp[j] <= 'Z')
				tmp[j] = tmp[j] - 'A' + 'a';
		}
		tst.push_back(make_pair(tmp, i));
	}
	sort(tst.begin(), tst.end());
	for(int i=0;i<tst.size();i++) cout << ans[tst[i].second];
	cout << endl;
}
