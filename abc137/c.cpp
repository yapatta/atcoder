#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N;
	cin >> N;
	vector<string> s(N);
	for(int i=0;i<N;i++)
	{
		cin >> s[i];
		sort(s[i].begin(), s[i].end());
	}
	sort(s.begin(),s.end());

	/*
	for(int i=0;i<N;i++)
		cout << s[i] << endl;
		*/
	string key = s[0];
	ll ans = 0;
	ll tmp = 1;
	for(int i=1;i<N;i++)
	{
		if(key==s[i]) {
			tmp++;
		}else {
			ans += tmp*(tmp-1)/2;
			key = s[i];
			tmp = 1;
		}
	}
	ans += tmp*(tmp-1)/2;
	cout << ans << endl;
}
