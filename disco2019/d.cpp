#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string changeS(string before) {
	int a = before[0] - '0';
	int b = before[1] - '0';
	int tmp = a+b;
	string after = to_string(tmp) + before.substr(2);
	return after;
}
int main(){
	int m;
	cin >> m;
	stack<int> st;
	for(int i=0;i<m;i++) {
		int d, c;
		cin >> d >> c;
		for(int i=0;i<c;i++) st.push(d);
	}
	//ll key = stoll(s);
	ll cnt = 0;
	while(!st.empty()) {
		if(st.size()==1) {
			break;
		}
		int a = st.top();
		st.pop();
		int b = st.top();
		st.pop();
		int nx = a+b;
		if(nx>=10) {
			st.push(nx/10);
			st.push(nx%10);
		}else{
			st.push(nx);
		}
		cnt++;
	}
	cout << cnt << endl;
	/*
	int cnt = 0;
	while(1) {
		before = changeS(before);
		cnt++;
		if(stoll(before) < 10) break;
	}
	cout << cnt << endl;
	*/
}
