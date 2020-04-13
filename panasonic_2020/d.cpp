#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N;
	cin >> N;
	queue<pair<string,int>> q;
	q.push({"", 0});
	int sum = 0;
	while(!q.empty()) {
		auto tmp  = q.front(); q.pop();
		string now = tmp.first;
		if(now.size() == N) {
			cout << now << endl;
			continue;
		}
		int cnt = tmp.second;
		for(int i=0;i<=cnt;i++) {
			string next = now + char('a'+i);
			q.push({next, ((i < cnt) ? cnt : cnt+1)});
		}
	}
}
