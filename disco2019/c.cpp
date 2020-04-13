#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int h,w,k;
	cin >> h >> w >> k;
	vector<vector<int>> st(h);
	for(int i=0;i<h;i++) {
		string s;
		cin >> s;
		for(int j=0;j<s.size();j++) {
			if(s[j] == '#') {
				st[i].push_back(j);
			}
		}
	}
	vector<vector<int> > ans(h,vector<int>(w));
	int cnt = 1;
	int tmp = 0;
	for(int i=0;i<h;i++) {
		if(st[i].size()==0) {
			tmp++;
		}else{
			break;
		}
	}
	{
		int itr = 1;
		for(int j=0;j<=st[tmp][0];j++) {
			ans[tmp][j] = cnt;
		}
		for(int j=st[tmp][0]+1;j<w;j++) {
			if(itr < st[tmp].size()  and st[tmp][itr] == j) {
				itr++;
				cnt++;
			}
			ans[tmp][j] = cnt;
		}
		for(int i=0;i<tmp;i++) {
			for(int j=0;j<w;j++) {
				ans[i][j] = ans[tmp][j];
			}
		}
		while(1) {
			if(tmp+1 < h && st[tmp+1].size() == 0) {
				// ans[i+1]にans[i]をコピー
				for(int j=0;j<w;j++) {
					ans[tmp+1][j] = ans[tmp][j];
				}
				tmp++;
			}else{
				cnt++;
				break;
			}
		}
	}

	for(int i=tmp+1;i<h;i++) {
		for(int j=0;j<=st[i][0];j++) {
			ans[i][j] = cnt;
		}
		int itr=1;
		for(int j=st[i][0]+1;j<w;j++) {
			if(itr < st[tmp].size()  and st[i][itr] == j) {
				itr++;
				cnt++;
			}
			ans[i][j] = cnt;
		}
		if(i+1 < h && st[i+1].size() == 0) {
			// ans[i+1]にans[i]をコピー
			for(int j=0;j<w;j++) {
				ans[i+1][j] = ans[i][j];
			}
			i++;
		}
		cnt++;
	}
	for(int i=0;i<h;i++) {
		for(int j=0;j<w;j++) {
			cout << ans[i][j] << ((j==w-1)?"\n":" ");
		}
	}
	return 0;
}
